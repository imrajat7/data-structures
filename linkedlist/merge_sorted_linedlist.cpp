Node* mergeTwoLLs(Node *head1, Node *head2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    Node *h1,*h2;
    h1 = head1;
    h2 = head2;
    Node *finalHead = NULL, *finalTail = NULL;
    if(h1->data<h2->data){
        finalHead = h1;
        finalTail = h1;
        h1=h1->next;
    }else{
        finalHead = h2;
        finalTail = h2;
        h2 = h2->next;
    }
    while(h1!=NULL && h2!=NULL){
        if(h1->data<h2->data){
            finalTail->next = h1;
            finalTail = h1;
            h1 = h1->next;
                
        }else{
            finalTail->next = h2;
            finalTail = h2;
            h2 = h2->next;
        }
    }
    if(h1==NULL){
        finalTail->next = h2;
    }
    else{
        finalTail->next = h1;
    }
    return finalHead;
}
