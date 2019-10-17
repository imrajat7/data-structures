node* rev_linkedlist_itr(node* head)
{
    node *next = NULL, *prev = NULL;
    node *current = head;
    while(current!=NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

