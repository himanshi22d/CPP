class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr)
            return false;

        // If the current node is a leaf node and its value equals the
        // targetSum, return true
        if (root->left == nullptr && root->right == nullptr &&
            root->val == targetSum)
            return true;

        // Recursively check if there is a path with the updated targetSum for
        // the left and right subtrees
        return hasPathSum(root->left, targetSum - root->val) ||
               hasPathSum(root->right, targetSum - root->val);
    }
};
