1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    TreeNode* insertIntoBST(TreeNode* root , int val) {
15        if(root==NULL){
16            return new TreeNode(val);
17        }
18            if(root->val<val){
19                root->right=insertIntoBST(root->right,val);
20            }else{
21                root->left=insertIntoBST(root->left,val);
22            }
23        return root;
24    }
25    TreeNode* bstFromPreorder(vector<int>& pre) {
26        int n=pre.size();
27        TreeNode* root=new TreeNode(pre[0]);
28        for(int i=1;i<n;i++){
29            insertIntoBST(root,pre[i]);
30        }
31        return root;
32    }
33};