Pair* constructBSTHelper(BinaryTreeNode<int>* root){
    if(root==NULL)
        return NULL;
    Node<int>* main = new Node<int>(root->data);
    Pair *res = new Pair();
    res->head = main;
    res->tail = main;
    
    
    Pair *leftChild = constructBSTHelper(root->left);
    if(leftChild!=NULL){
        leftChild->tail->next = res->head;
        res->head = leftChild->head;
    }
    Pair *rightChild = constructBSTHelper(root->right);
    if(rightChild!=NULL){
        res->tail->next = rightChild->head;
        res->tail = rightChild->tail;
    }
    return res;
}

Node<int>* constructBST(BinaryTreeNode<int>* root) {
    Pair *res = constructBSTHelper(root);
    return res->head;
}
