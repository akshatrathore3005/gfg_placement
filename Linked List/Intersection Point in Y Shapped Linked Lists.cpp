int intersectPoint(Node* head1, Node* head2)
{
    int l1 = getLength(head1);
    int l2 = getLength(head2);
    
    int l = abs (l1-l2);
    
    if(l1>l2)
    {
        while(l--)
            head1 = head1->next;
    }
    else
    {
        while(l--)
            head2 = head2->next;
    }
    
    while(head1!=NULL && head2!=NULL)
    {
        if(head1 == head2)
        {
            return head1->data;
        }
    }
    return -1;
}
