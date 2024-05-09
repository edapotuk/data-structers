//
//  ArrayStack.hpp
//  Queue
//
//  Created by Edanur Potuk on 8.11.2023.
//


#ifndef ArrayStack_hpp
#define ArrayStack_hpp

#include <stdio.h>

const int SIZE = 10;
const int WARNING = -1000000;

class ArrayStack {
private:
    int items[SIZE];
    int top;
    
public:
    ArrayStack();
    //isemty push pop peek  ---> bool bool bool int
    bool isEmpty() const ;
    bool push(const int newEntry);
    bool pop();
    int peek()const;
    void display()const;
};

#endif /* ArrayStack_hpp */
