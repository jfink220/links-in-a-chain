#include "linked_list.hpp"
Node::Node(Link* link, Node* node) : linkPtr(link), nextPtr(node){

}

Node::Node(Link* link) : linkPtr(link), nextPtr(nullptr){

}
Node* Node::next(){
    if(nextPtr == nullptr){
        std::cout << "The next pointer is a nullptr" << std::endl;
    }
    return (nextPtr);
}

void Node::append(Node* apndNode){
    if(nextPtr == nullptr){
        nextPtr = apndNode;
    }
}

Link* Node::get_link(){
    return linkPtr;
}