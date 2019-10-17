BinaryTreeNode<int>* build(int *preorder,int pres,int pree, int *inorder, int ins,int ine)
{
    if(ins > ine || pres > pree)
        return NULL;
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(preorder[pres]);

    int i=0; //i=rootindex
    while(inorder[i]!=root->data)
    {
        i++;
    }

    root->left=build(preorder, pres+1, pres+ (i-ins), inorder, ins, i-1);
    root->right=build(preorder , pres + (i-ins) +1, pree, inorder, i+1, ine);
    
    return root; 
}

BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {
    
    if(preLength==inLength==0)
        return NULL;
    
    int ins=0, ine=inLength-1, pres=0, pree=preLength-1;
    
    return build(preorder,pres,pree,inorder, ins,ine);
}
