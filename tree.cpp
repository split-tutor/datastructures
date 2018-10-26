// tree.cpp - binary search tree implementations

#include <iostream>

#include "tree.h"

// Create a leaf
Node* leaf(int val)
{
    return new Node{val, nullptr, nullptr};
}

// Find a node of given value in the subtree
Node* find(Node* root, int val)
{
    //////////////////////////////////////////////////////////////////////////////////
    // TODO: Implement `find()` that returns the pointer to the node with value v
    // if there exists such a node, otherwise return `nullptr`.
    //////////////////////////////////////////////////////////////////////////////////
    return nullptr;
}

// Insert a leaf to the subtree
void insertLeaf(Node* root, int val)
{
    auto iter = root;
    auto newNode = new Node{val, nullptr, nullptr};

    while (true) {
        if (val < iter->val) {
            if (!iter->left) {
                iter->left = newNode; break;
            }
            iter = iter->left;
        } else {
            if (!iter->right) {
                iter->right = newNode; break;
            }
            iter = iter->right;
        }
    }
}

// Visit and print value with in-order dfs traversal
void visitInOrder(Node* root)
{
    if (!root) {
        return;
    } else if (isLeaf(root)) {
        std::cout << root->val << ' ';
        return;
    }

    visitInOrder(root->left);
    std::cout << root->val << ' ';
    visitInOrder(root->right);
}
