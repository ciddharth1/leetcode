        if(root->val==sum){
            count++;
        }
        helper(root->left,count,sum-(long long)root->val);
        helper(root->right,count,sum-(long long)root->val);
        return count;
        
    }
    int pathSum(TreeNode* root, long long targetSum) {
        if(root==NULL) return 0;
       int count=0;
        count=helper(root,count,(long long)targetSum);
        count+=(pathSum(root->left,targetSum)+pathSum(root->right,targetSum));
        return (long long)count;
    }
};
