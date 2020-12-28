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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
    if (!root) return result;
    Helper(root, result, 0);
    return result;
}
void Helper(TreeNode* root, vector<vector<int>> &result, int h){
    if (!root) return;

    if (result.size()<h+1){
        vector<int> tmp;
        tmp.push_back(root->val);
        result.push_back(tmp);
    }else{
        result[h].push_back(root->val);
    }
    Helper(root->left, result, h+1);
    Helper(root->right, result, h+1);
    }
};
