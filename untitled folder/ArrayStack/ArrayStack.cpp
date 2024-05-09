//
//  ArrayStack.cpp
//  ArrayStack
//
//  Created by Edanur Potuk on 2.11.2023.
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

bool ArrayStack::removeAll(ArrayStack myStack,ArrayStack aStack,const int targetItem){
    while (!myStack.isEmpty()) {
        if (myStack.peek()==targetItem) {
            myStack.pop();
        } else {
            aStack.push(myStack.peek());
            myStack.pop();
        }
    }
    
    while (!aStack.isEmpty()) {
        myStack.push(aStack.peek());
        aStack.pop();
    }
    myStack.display();
    return true;
    
}

void ArrayStack::reverseStack(ArrayStack myStack,ArrayStack aStack){
    
    if (myStack.isEmpty()) {
        myStack = aStack;
        myStack.display();
        return;
    } else {
        aStack.push(myStack.peek());
        myStack.pop();
        reverseStack( myStack, aStack);
    }
     
}

void ArrayStack::reversee(ArrayStack myStack,ArrayStack aStack){
    
    while (!myStack.isEmpty()) {
        aStack.push(myStack.peek());
        myStack.pop();
    }
    aStack.display();
}


