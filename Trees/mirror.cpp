void mirrorBinaryTree(BinaryTreeNode<int>* root) {
    queue<BinaryTreeNode<int>*> pendingNodes;
    BinaryTreeNode<int>* temp;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        BinaryTreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        if(front->left==NULL&&front->right!=NULL){
            front->left = front->right;
            front->right = NULL;
        }
        else if(front->left!=NULL&&front->right==NULL){
            front->right = front->left;
            front->left==NULL;
        }
        else{
            temp=front->left;
            front->left = front->right;
            front->right = temp;
        }
        if(front->left!=NULL)
        pendingNodes.push(front->left);
        if(front->right!=NULL)
        pendingNodes.push(front->right);
        
    }
}

