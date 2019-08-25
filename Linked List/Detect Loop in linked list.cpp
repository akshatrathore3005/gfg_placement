int detectloop(Node *head) {

    Node *fast = head;
    Node *slow = head;
    int flag = 0;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            flag = 1;
            break;
        }
    }
    return flag;
    
}
