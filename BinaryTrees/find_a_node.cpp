
bool isNodePresent(BinaryTreeNode<int>* root, int x) {
    bool res = false;
    if(root->data == x)
        return true;
    if(root->left!=NULL){
        res = isNodePresent(root->left,x);
        if(res==true)
        return true;
    }
    if(root->right!=NULL){
        res = isNodePresent(root->right,x);
        if(res==true)
        return true;
    }
    return res;
}

