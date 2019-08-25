Node* rotate(Node* head, int k) {
    Node *p = head;
    Node *t = head;
    while(t->next != NULL)
    {
        t=t->next;
    }
    t->next = head;
    for(int i=0; i<k-1; i++)
    {
        p = p->next;
    }
    
    head = p->next;
    p->next = NULL;
    return head;
}
