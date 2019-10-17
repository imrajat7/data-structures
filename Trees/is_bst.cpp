int maximum(BinaryTreeNode<int>* root){
    if(root==NULL)
        return INT_MIN;
    int max1 = maximum(root->left);
    int max2 = maximum(root->right);
    return max(root->data,max(max1,max2));
}

int minimum(BinaryTreeNode<int>* root){
    if(root==NULL)
        return INT_MAX;
    int min1 = minimum(root->left);
    int min2 = minimum(root->right);
    return min(root->data,min(min1,min2));
}
bool isBST(BinaryTreeNode<int> *root){
    if(root==NULL)
        return true;
    int leftMax = maximum(root->left);
    int rightMin = minimum(root->right);
    bool output = (root->data > leftMax) && (root->data <= rightMin) && isBST(root->left) && isBST(root->right);
    return output;
}
