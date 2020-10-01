class Solution {
public:
    vector<int>dfs(TreeNode *root,int target,int depth,int parent){
        if(root==NULL)
            return {};
        if(root->val==target)
            return {depth,parent};
        parent=root->val;
        vector<int>l=dfs(root->left,target,depth+1,parent);
        vector<int>r=dfs(root->right,target,depth+1,parent);
         if(l.empty() && r.empty())
            return {};
        if(!l.empty())
            return l;
        return r;
    }
    bool isCousins(TreeNode* root, int x, int y) {
       vector<int>d1=dfs(root,x,0,-1);
       vector<int>d2=dfs(root,y,0,-1);
        if(d1[1] !=d2[1] && d1[0]==d2[0])
            return true;
        
        return false;
    }
};