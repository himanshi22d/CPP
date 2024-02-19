#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// A binary tree node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

// Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
    vector<int> result;
    if (root == nullptr)
        return result;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        bool isFirstNode = true;

        for (int i = 0; i < size; ++i) {
            Node* current = q.front();
            q.pop();

            // If it's the first node of this level, add it to the result
            if (isFirstNode) {
                result.push_back(current->data);
                isFirstNode = false;
            }

            // Add the left and right children to the queue
            if (current->left)
                q.push(current->left);
            if (current->right)
                q.push(current->right);
        }
    }
    return result;
}

// Driver code
int main()
{
    // Example usage
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);
    root->left->left->right = new Node(7);

    vector<int> result = leftView(root);
    for (int x : result)
        cout << x << " ";
    cout << endl;

    return 0;
}
