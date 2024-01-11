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
    void find(TreeNode* root, int min, int maxi, int &ans){
        
        if(root == NULL){
            return;
        }

        if(root -> val < min){
            min = root -> val;
        }
        maxi = max(root -> val, maxi);

        ans = max(ans, abs(min - root -> val));
        ans = max(ans, abs(maxi - root -> val));
           
        find(root -> left, min, maxi, ans);
        find(root -> right, min, maxi, ans);
    }

    int maxAncestorDiff(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int ans = 0;
        find(root, root -> val, root -> val, ans);
        return ans;
    }
};