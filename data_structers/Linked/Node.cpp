//
//  Node.cpp
//  Linked
//
//  Created by Edanur Potuk on 29.10.2023.
//

#include "Node.hpp"

Node::Node(const int anItem)
{
    item = anItem;
    next = nullptr;
}

void Node::setItem(const int anItem)
{
    item = anItem;
}

void Node::setNext(Node* nextNodePtr)
{
    next = nextNodePtr;
}

int Node::getItem() const
{
    return item;
}

Node* Node::getNext() const
{
    return next;
}
