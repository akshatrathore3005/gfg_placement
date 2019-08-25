void removeTheLoop(Node *head)
{
    Node *fast = head, *slow = head;
    int flag=0;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
     
        if(slow == fast)
        {  
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        while(head->next!=slow->next)
        {
            slow=slow->next;
            head=head->next;
        }
        slow->next=NULL;
    }
}
