node* mergeTwoLL(node *firstHalf, node *secondHalf){
    node *h1 = firstHalf;
    node *h2 = secondHalf;
    node *finalHead = NULL, *finalTail = NULL;
    if(h1->data<h2->data){
        finalHead = h1;
        finalTail = h1;
        h1 = h1->next;
    }else{
        finalHead = h2;
        finalTail = h2;
        h2 = h2->next;
    }
    while(h1!=NULL&&h2!=NULL){
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
    if(h1==NULL)
        finalTail->next = h2;
    else
        finalTail->next = h1;
    
    return finalHead;
}
node* mergeSort(node *head) {
    
    if(head->next==NULL||head==NULL)
    {
        return head;
    }
    node *slowPtr = head;
    node *fastPtr = head;
    while(fastPtr->next!=NULL&&fastPtr->next->next!=NULL){
        fastPtr = fastPtr->next->next;
        slowPtr = slowPtr->next;
    }
    node *secondHalf = slowPtr->next;
    slowPtr->next = NULL;
    
    node *firstHalf = mergeSort(head);
    node *sHalf = mergeSort(secondHalf);
    node *finalResult = mergeTwoLL(firstHalf,sHalf);
    
    // Node *firstHalf = mergeSort(slowPtr);
    return finalResult;
}
