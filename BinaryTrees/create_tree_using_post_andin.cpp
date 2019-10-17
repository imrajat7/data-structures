BinaryTreeNode<int>* build(int *postorder,int posts,int poste, int *inorder, int ins,int ine)
{
    if(posts > poste || ins > ine)
        return NULL;
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(postorder[poste]);

    int i=0; //i=rootindex
    while(inorder[i]!=root->data)
    {
        i++;
    }

    root->left=build(postorder, posts, posts+ (i-ins)-1, inorder, ins, i-1);
    root->right=build(postorder , posts + (i-ins), poste-1, inorder, i+1, ine);
    
    return root; 
}

BinaryTreeNode<int>* getTreeFromPostorderAndInorder(int *postorder, int postLength, int *inorder, int inLength) {
    
    int posts=0, poste=postLength-1, ins=0, ine=inLength-1;
    
    return build(postorder,posts,poste,inorder, ins,ine);
}
