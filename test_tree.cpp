// test_tree.cpp - test binary search tree implementations

#include <iostream>

#include "tree.h"

int main()
{
    auto root = leaf(13);

    insertLeaf(root, 7);
    insertLeaf(root, 8);
    insertLeaf(root, 3);
    insertLeaf(root, 21);
    insertLeaf(root, 19);
    insertLeaf(root, 42);

    visitInOrder(root);

    std::cout << "\nfind(root, 13): " << find(root, 13)
              << "\nfind(root, 19): " << find(root, 19) 
              << "\nfind(root, 17): " << find(root, 17) << '\n';

    return 0;
}