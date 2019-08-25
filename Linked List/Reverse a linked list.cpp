Node* reverseList(Node *head)
{
    Node *prev = NULL, *curr = head, *nxt;
    
    while(curr!=NULL)
    {
        nxt = curr->next;
        curr->next = prev;
        prev=curr;
        curr=nxt;
    }
    
    return prev;
}
