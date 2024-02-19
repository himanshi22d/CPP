
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        if (!root) return result; // If the root is null, return an empty result
        
        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
            int levelSize = q.size();
            TreeNode* rightmostNode = nullptr;
            
            for (int i = 0; i < levelSize; ++i) {
                TreeNode* currentNode = q.front();
                q.pop();
                
// Update the rightmost node at each level
                if (i == levelSize - 1) {
                    rightmostNode = currentNode;
                }
                
                if (currentNode->left) q.push(currentNode->left);
                if (currentNode->right) q.push(currentNode->right);
            }
            
            // Add the value of the rightmost node to the result
            result.push_back(rightmostNode->val);
        }
        
        return result;
    }
};
