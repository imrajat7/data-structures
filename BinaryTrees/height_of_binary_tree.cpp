int height(BinaryTreeNode<int> *root) {
    int rheight = 0;
    if(root==NULL)
        return 0;
    lheight = height(root->left);
    rheight = height(root->right);
    return 1+ max(lheight,rheight);
}
