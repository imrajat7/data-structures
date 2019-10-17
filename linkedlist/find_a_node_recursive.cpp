int indexOfNRecursive(Node *head, int n) {

    if(head==NULL){
        return -1;
    }
    if(head->data==n)
        return 0;
    int smallOutput = indexOfNRecursive(head->next,n);
    if(smallOutput==-1)
        return -1;
    return smallOutput+1;
}
