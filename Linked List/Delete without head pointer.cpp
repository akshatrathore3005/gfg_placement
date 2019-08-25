#include<algorithm>

void deleteNode(Node *node)
{   
    Node *temp;
    while(node->next!=NULL)
    {
        swap(node->data,node->next->data);
        if(node->next->next == NULL)
            temp = node;
        node = node->next;
        
    }
    delete node;
    temp->next=NULL;
        
}
