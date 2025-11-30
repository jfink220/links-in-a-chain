#include "link.hpp"
#include <iostream>
#pragma once

class Node{
    private:
        Link* linkPtr = nullptr;
        Node* nextPtr = nullptr;
    public:
        Node(Link* link, Node* node);
        Node(Link* link);
        Node* next();
        void append(Node* apndNode);
        Link* get_link();
};