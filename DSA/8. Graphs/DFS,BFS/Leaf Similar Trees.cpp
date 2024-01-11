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
    void returnList(TreeNode* root, vector<int> &arr){
        if(root == NULL){
            return;
        }
        if(root -> left == NULL && root -> right == NULL){
            arr.push_back(root -> val);
        }
        returnList(root -> left, arr);
        returnList(root -> right, arr);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> arr;
        vector<int> arr2;
        returnList(root1, arr);
        returnList(root2, arr2);
        return arr == arr2;
    }
};