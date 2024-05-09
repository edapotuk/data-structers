//
//  LinkedBag.cpp
//  Linked
//
//  Created by Edanur Potuk on 29.10.2023.
//

#include "LinkedBag.hpp"
#include "Node.hpp"

LinkedBag::LinkedBag(){
    headPtr = nullptr;
    itemCount = 0;
}

//LinkedBag::~LinkedBag(){
//}

bool LinkedBag::isEmpty()const{
    return headPtr == nullptr;
}
int LinkedBag::getCurrentSize()const{
    return itemCount;
    
}
bool LinkedBag::add(const int newEntry){
    Node* nodeToBeAdded = new Node(newEntry);

    if (itemCount == 0) {
        headPtr = new Node(newEntry);
    } else {
        if (newEntry < headPtr->getItem()) {
            nodeToBeAdded->setNext(headPtr);
            headPtr = nodeToBeAdded;
        } else {
            Node* prev = nullptr;
            Node* cur = headPtr;
            while ((cur != nullptr)&&(cur->getItem() < newEntry)){
                prev = cur;
                cur = cur->getNext();
            }
            prev->setNext(nodeToBeAdded);
            nodeToBeAdded->setNext(cur);
        }
    }
    itemCount++;
    return true;
}
bool LinkedBag::remove(const int anEntry){
    Node* nodeToBeRemoved = getPointerTo(anEntry);
    bool canRemoveItem = contains(anEntry);
    if (canRemoveItem) {
        if (nodeToBeRemoved == headPtr) {
            headPtr = headPtr->getNext();
        } else {
            Node* prev = headPtr;
            while (prev->getNext() != nodeToBeRemoved) {
                prev = prev ->getNext();
            }
            prev->setNext(nodeToBeRemoved->getNext());

        }
        delete nodeToBeRemoved;
        nodeToBeRemoved = nullptr;
        itemCount--;
    }
    return canRemoveItem;
}



int LinkedBag::getFrequencyOf(const int anEntry)const {
    int frequency = 0;
    Node* cur;
    for (cur = headPtr; cur != nullptr; cur = cur->getNext()) {
        if (anEntry == cur->getItem()) {
            frequency++;
        }
    }
    return frequency;
}


bool LinkedBag::contains(const int anEntry)const{
    return (getPointerTo(anEntry) != nullptr);
}

Node* LinkedBag::getPointerTo(const int anEntry)const{
    Node* cur = headPtr;
    while ((cur != nullptr)&& (anEntry != cur->getItem())){
        cur = cur->getNext();
    }
    return cur;
}
void LinkedBag::printBag() const{
    Node* cur = headPtr;
    while (cur != nullptr) {
        std::cout<<cur->getItem()<<" ";
        cur = cur->getNext();
    }
    std::cout<<" "<<std::endl;

}

void LinkedBag::printReverseBag() const{
    Node* cur = headPtr;
    int items[itemCount];
    for (int i = itemCount-1; i>=0; i--) {
        items[i] = cur->getItem();
        cur = cur->getNext();
    }
    for (int i = 0; i<itemCount; i++) {
        std::cout<<items[i]<<" ";
    }
    std::cout<<" "<<std::endl;
}

void LinkedBag::printItems(Node* root){
    
   
}

void LinkedBag::addTree(int anEntry){
    Node* root = nullptr;
    Node* nodeToBeAdded = new Node(anEntry);
    
    if (itemCount==0) {
        root = nodeToBeAdded;
    } else {

    }
}
