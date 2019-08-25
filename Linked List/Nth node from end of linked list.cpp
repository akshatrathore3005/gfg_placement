*/
/* Should return data of n'th node from the end of linked list.
*  head: head of the linked list
*  n: nth node from end to find
*/

int getLength (Node *head)
{   
    int i = 0;
    while(head!=NULL)
    {
        head = head->next;
        i++;
    }
    //cout<<"i is"<<i<<endl;
    return i;
}

int getNthFromLast(Node *head, int n)
{
    int l = getLength(head);
    if (n>l)
        return -1;
        
    l = l-n+1;
    
    for(int i=0; i < l-1; i++)
        head = head->next;
        
    return head->data;
    
}
