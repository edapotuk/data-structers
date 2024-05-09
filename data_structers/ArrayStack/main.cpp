//
//  main.cpp
//  ArrayStack
//
//  Created by Edanur Potuk on 2.11.2023.
//

#include <iostream>
#include "ArrayStack.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    ArrayStack myStack;
    ArrayStack aStack;
    ArrayStack edaStack;

    myStack.push(1);
    myStack.push(2);
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);
    myStack.push(3);
    myStack.push(4);
    myStack.display();
    std::cout<<"eda";
    myStack.removeAll(myStack, aStack, 2);
    std::cout<<"eda"<<std::endl;
   // myStack.reverseStack(myStack, aStack);
    myStack.reversee(myStack, aStack);


    

    
    
}
