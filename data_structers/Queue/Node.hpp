//
//  Node.hpp
//  Queue
//
//  Created by Edanur Potuk on 3.11.2023.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>

class Node{
private:
    int item;
    Node* next;
public:
    Node(const int anItem);
    void setItem(const int anItem);
    void setNext (Node* nextNodePtr);
    int getItem() const ;
    Node* getNext () const;
    
};

#endif /* Node_hpp */
