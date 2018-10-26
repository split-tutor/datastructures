// list.cpp - linked list implementations
#include "list.h"

// Print contents in the list.
void print_list(const Node* hd)
{
    for (auto iter = hd; iter != nullptr; iter = iter->next) {
        std::cout << iter->val << " ";
    } 
    
    std::cout << "\n";
}

// Create a node with given value.
Node* list_of(int val)
{
    return new Node{ val, nullptr };
}

// Add a node of given value after the last element.
void push_back(Node* hd, int val)
{
    if (hd == nullptr)
        return;

    auto iter = hd;

    // advance iter until iter->next is empty.
    for (; iter->next != nullptr; iter = iter->next);

    std::cout << iter << std::endl;

    iter->next = new Node{val, nullptr};
}

// Add a node at the head of the list.
Node* push_front(Node* hd, int val)
{
    if (hd == nullptr)
        return list_of(val);
    
    auto new_header = list_of(val);
    new_header->next = hd;

    return new_header;
}

// Gracefully destructing the list.
void clear_list(Node* hd)
{
    while (hd->next != nullptr) {
        auto p1 = hd, p2 = hd->next;
        if (p2 == nullptr)
            break;
        for (; p2->next != nullptr; p1 = p1->next, p2 = p2->next);
        delete p2;
        p1->next = nullptr;
    }

    delete hd;
};

// TODO: count the number of elements in the list
int length(Node* hd) { return 0; }

// TODO: insert a node at given index. For exmaple:
bool push_at(Node* hd, int index, int val) { return false; }

// TODO: delete a node at given index. For example:
int delete_at(Node* hd, int index) { return -1; }