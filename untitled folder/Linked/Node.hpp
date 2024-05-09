//
//  Node.hpp
//  Linked
//
//  Created by Edanur Potuk on 29.10.2023.
//

#ifndef Node_hpp
#define Node_hpp

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
