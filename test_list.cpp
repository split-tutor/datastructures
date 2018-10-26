// test_list.cpp - test linked list implementation
#include <iostream>
#include <functional>

#include "list.h"

int main()
{
    auto list = push_front(nullptr, 3);
    push_back(list, 4);
    push_back(list, 5);
    push_back(list, 6);
    list = push_front(list, 2);
    list = push_front(list, 1);

    print_list(list);
    clear_list(list);
}
