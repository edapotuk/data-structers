//
//  LinkedBag.hpp
//  Linked
//
//  Created by Edanur Potuk on 29.10.2023.
//
#include <iostream>
#include "Node.hpp"

#ifndef LinkedBag_hpp
#define LinkedBag_hpp



class LinkedBag
{
private:

    
public:
    Node* headPtr; // Pointer to the first node
    int itemCount; // Current count of bag items

    Node* getPointerTo(const int target) const;
    
    
    
    LinkedBag();
    //virtual ~LinkedBag();
    int getCurrentSize() const;
    bool isEmpty() const;
    bool add(const int newEntry);
    bool remove(const int anEntry);
    void clear();
    bool contains(const int anEntry) const;
    int getFrequencyOf(const int anEntry) const;
    void printBag() const;
    void printReverseBag() const;
    
    
    void printItems(Node* root);
    void addTree(int anEntry);

};


#endif /* LinkedBag_hpp */
