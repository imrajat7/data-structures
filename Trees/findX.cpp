// Following is the given Tree node structure.
/**************
template <typename T>
class TreeNode {
public:
    T data;
    vector<TreeNode<T>*> children;
    
    TreeNode(T data) {
        this->data = data;
    }
    
    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};
***************/

bool containsX(TreeNode<int>* root, int x) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    bool result;
    if(root->data==x){
        return true;
    }
    for(int i=0;i<root->children.size();i++){
        bool result = containsX(root->children[i],x);
        if(result==true)
            return true;
    }
    return result;
}


