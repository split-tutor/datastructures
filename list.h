// list.h - linked list interfaces
#include <iostream>

// A Node in the linked list
struct Node {
    int val;    // node value
    Node* next; // a pointer to next node

    // A destructor.
    ~Node() {
        std::cout << "destroy the node with value " << val << "\n";
    }
};

// Print contents in the list.
void print_list(const Node* hd);

// Create a node with given value.
Node* list_of(int val);

// Add a node of given value after the last element.
void push_back(Node* hd, int val);

// Add a node at the head of the list.
Node* push_front(Node* hd, int val);

// Gracefully destructing the list.
void clear_list(Node* hd);

// TODO: count the number of elements in the list
int length(Node* hd);

// TODO: insert a node at given index. For exmaple:
//
//   0        1        2
// +---+    +---+    +---+
// | 1 | -> | 4 | -> | 8 |
// +---+    +---+    +---+
//
// push_at(hd, 1, 13);
//
//   0         1        2        3
// +---+    +----+    +---+    +---+
// | 1 | -> | 13 | -> | 4 | -> | 8 |
// +---+    +----+    +---+    +---+
//
// If you can't push a node at given index (e.g. out of bound, 
// negative index), do nothing and return false, otherwise
// return true.
bool push_at(Node* hd, int index, int val);

// TODO: delete a node at given index. For example:
//
//   0         1        2        3
// +---+    +----+    +---+    +---+
// | 1 | -> | 13 | -> | 4 | -> | 8 |
// +---+    +----+    +---+    +---+
//
// int val = delete_at(hd, 2); // val == 4
//
//   0        1        2
// +---+    +----+    +---+
// | 1 | -> | 13 | -> | 8 |
// +---+    +----+    +---+
//
// If you can't delete a node at given index, return -1
// otherwise return the node value. Don't forget to delete
// the memory.
int delete_at(Node* hd, int index);

////////////////////////////////////////////////////////////////////////////////
// (Challenge) We can also make doubly linked list or circular 
// linked list or *doubly linked circular list* as well. For example:
//
// struct Node {
//     int val;
//     Node* prev;
//     Node* next;
// }
//
// Your Node can have both pointers to previous node and the next node.
// 
// +---+    +----+    +---+    +---+
// | 1 |    | 13 |    | 4 |    | 8 |
// |   | -> |    | -> |   | -> |   |
// |   | <- |    | <- |   | <- |   |
// +---+    +----+    +---+    +---+
//
// On the other hand, you can set the next node of the last node
// to be the first node.
//
//  +------------------------------+
//  |   +---+    +----+    +---+   |
//  +-> | 1 | -> | 13 | -> | 8 | --+
//      +---+    +----+    +---+
//
// Try to implement functions for these lists.
////////////////////////////////////////////////////////////////////////////////