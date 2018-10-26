// tree.h - binary search tree interfaces

// Node in the binary search tree
struct Node {
    int val;
    Node *left, *right;
};

inline bool isLeaf(Node* node)
{
    return !node->left && !node->right;
}

// Create a leaf
Node* leaf(int val);

// Find a node of given value in the subtree
Node* find(Node* root, int val);

// Insert a leaf to the subtree
void insertLeaf(Node* root, int val);

// Visit and print value with in-order dfs traversal
void visitInOrder(Node* root);