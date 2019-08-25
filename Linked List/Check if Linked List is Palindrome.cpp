int len(Node *head)
{   
    int x = 0;
    while(head!=NULL)
    {
        x++;
        head=head->next;
    }
    return x;
}
bool isPalindrome(Node *head)
{   
    bool flag = true;
    int l = len(head);
    int mid = l/2;
    stack <int> s;
    while(mid--)
    {
        s.push(head->data);
        head=head->next;
        
    }
    
    if(l%2!=0)
        head=head->next;
    while(head!=NULL)
    {
        if(head->data == s.top())
        {
            head = head->next;
            s.pop();
        }
        else
        {
            flag = false;
            break;
        }
    }
    if(!s.empty())
    {
        flag = false;
    }
    
    return flag;
    
}
