//
//  Queue.hpp
//  Queue
//
//  Created by Edanur Potuk on 8.11.2023.
//


#ifndef Queue_hpp
#define Queue_hpp

#include <stdio.h>
#include "Node.hpp"

class Queue{
private:
    int itemCount;
    Node* front;
    Node* tail;

public:
    Queue();
    bool isEmpty() const;
    bool enqueue(const int newEntry);
    bool dequeue();
    int peekFront() const;
    void display() const;
    
};

#endif /* Queue_hpp */
