    int level(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(level(root->left),level(root->right));
    }
    void preorder(TreeNode* root,vector<int>&ans,int l){
        if(root==NULL)return;
        ans[l]=root->val;
        preorder(root->left,ans,l+1);
        preorder(root->right,ans,l+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans(level(root),0);
        preorder(root,ans,0);
        return ans;
    }
};
