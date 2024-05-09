//
//  main.cpp
//  Queue
//
//  Created by Edanur Potuk on 3.11.2023.
//

#include <iostream>
#include "Node.hpp"
#include "Queue.hpp"
#include "ArrayStack.hpp"


int main(int argc, const char * argv[]) {
    ArrayStack aStack;
    ArrayStack myStack;
    ArrayStack bStack;


    Queue myQueue;
    
    myStack.push(10);
    myStack.push(-100);
    myStack.push(10);
    myStack.push(3);
    myStack.push(5);
    myStack.push(10);
    myStack.push(3);
    myStack.push(5);
    
    myStack.display();
    std::cout<<"eda";
    aStack.display();
    std::cout<<"eda";

    while (!myStack.isEmpty()) {
        aStack.push(myStack.peek());
        myStack.pop();
    }
    std::cout<<"edaaaaa";

    
    myStack = aStack;

    myStack.display();

    int min = myStack.peek();
    
    while (!myStack.isEmpty()) {
        if (myStack.peek()<= min) {
            min = myStack.peek();
        }
        bStack.push(myStack.peek());
        myStack.pop();
    }
    
    while (!bStack.isEmpty()) {
        myStack.push(bStack.peek());
        bStack.pop();
    }
    std::cout<<"eda"<<std::endl;
    myStack.display();
    std::cout<<"eda"<<std::endl;

    std::cout<<min;
    
}
    



/*
 
 int size;
 int myNum[100]= {};
 
 
 while (1) {
     
     std::cout<<"enter your size"<<std::endl;
     std::cin>>size;
     std::cout<<"size = "<<size<<std::endl;
     
     for (int i = 0; i<size; i++) {
         std::cin>>myNum[i];
         aStack.push(myNum[i]);
         myQueue.enqueue(myNum[i]);
     }
     std::cout<<"eda"<<std::endl;
     myQueue.display();
     aStack.display();
     
     
     if (!aStack.isEmpty() && !myQueue.isEmpty()) {
         while (!aStack.isEmpty() && !myQueue.isEmpty()) {
             if (aStack.peek() == myQueue.peekFront()) {
                 aStack.pop();
                 myQueue.dequeue();
             } else {
                 std::cout<<"not a polindrome"<<std::endl;
                 return 0;;
                 
             }
         }
     } else {
         std::cout<<"boslar"<<std::endl;
         return 0;
     }
     myQueue.display();
     aStack.display();
     std::cout<<"polindrom"<<std::endl;
     
     
     
 }
 
 */
