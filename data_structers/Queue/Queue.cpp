//
//  Queue.cpp
//  Queue
//
//  Created by Edanur Potuk on 8.11.2023.
//

#include <stdio.h>
#include "Queue.hpp"
#include "Node.hpp"
#include <iostream>

Queue::Queue(){
    itemCount = 0;
    front = nullptr;
    tail = nullptr;
}


bool Queue::isEmpty() const{
    return itemCount == 0;
}

bool Queue::enqueue(const int newEntry){
    Node* newNode = new Node(newEntry);
    if (isEmpty()) {
        front = newNode;
        tail = newNode;
    } else {
        tail->setNext(newNode);
        tail = newNode;
    }
    itemCount++;
    return true;
}

bool Queue::dequeue(){
    bool canRemoveItem = !isEmpty();
    if (canRemoveItem) {
        Node* nodeToDeletePtr = front;
        if (itemCount == 1) {
            front = nullptr;
            tail = nullptr;
        } else {
            front = front->getNext();
        }
        nodeToDeletePtr->setNext(nullptr);
        delete  nodeToDeletePtr;
        nodeToDeletePtr = nullptr;
        itemCount--;
    }

    return true;
}

int Queue::peekFront() const{
    return front->getItem();
}

void Queue::display() const{
    for (Node* cur = front; cur != nullptr; cur = cur->getNext()) {
        std::cout<<cur->getItem()<<" ";
    }
    std::cout<<" ";
}
