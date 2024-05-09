//
//  ArrayStack.cpp
//  Queue
//
//  Created by Edanur Potuk on 8.11.2023.
//

#include "ArrayStack.hpp"
#include <iostream>

ArrayStack::ArrayStack(){
    top = -1;
}

bool ArrayStack::isEmpty() const {
    return top < 0 ;
}

bool ArrayStack::push(const int newEntry){
    if (top < SIZE - 1 ) {
        top ++;
        items[top] = newEntry;
        return true;
    }
    return false;
}

bool ArrayStack::pop(){
    if (!isEmpty()) {
        top--;
        return true;
    }
    return false;
}

int ArrayStack::peek() const {
    if (!isEmpty()) {
        return items[top];
    }
    return WARNING;
}

void ArrayStack::display() const {
    for (int i = 0; i<=top; i++) {
        std::cout<<items[i]<<" ";
    }
}

