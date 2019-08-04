int numLeafNodes(TreeNode<int>* root) {

    int leafNodes = 0;
    int sum=0;
    for(int i=0;i<root->children.size();i++){
        leafNodes+=numLeafNodes(root->children[i]);
    }
    if(leafNodes!=0)
        return leafNodes;
    return leafNodes+1;
}
