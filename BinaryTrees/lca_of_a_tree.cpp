int lcaBinaryTree(BinaryTreeNode <int>* root , int val1, int val2){
    if(root==NULL)
        return -1;
    
    if(root->data == val1||root->data == val2)
        return root->data;
    
    int lans =  lcaBinaryTree(root->left,val1,val2);
    
    int rans = lcaBinaryTree(root->right,val1,val2);
    
    if(lans!=-1&&rans==-1)
        return lans;
    else if(lans==-1&&rans!=-1)
        return rans;
    if(lans!=-1&&rans!=-1)
        return root->data;
    else
        return -1;
}
