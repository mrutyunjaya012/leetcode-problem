// Last updated: 16/07/2026, 14:42:28
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<string>ans;
    void dfs(TreeNode* root, string path){

        if(root==NULL){
            return;
        }
        path+=to_string(root->val);
        
        if(root->left==NULL && root->right==NULL){
            ans.push_back(path);
            return;
        }
        path+="->";

         dfs(root->left, path);
         dfs(root->right, path);

    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string path="";
        dfs(root,path);
        return ans;
    }
};