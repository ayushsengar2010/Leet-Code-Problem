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
    void dfs(TreeNode* root,string s,vector<string> &arr){
        if(!root) return;
        s += to_string(root->val);
        if(!root->left && !root->right){
            arr.push_back(s);
            return;
        }
            dfs(root->left,s + "->" , arr);
            dfs(root->right,s + "->" , arr);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> arr;
        dfs(root, "" ,arr);
        return arr;

    }
};