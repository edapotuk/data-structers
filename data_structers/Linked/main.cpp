//
//  main.cpp
//  Linked
//
//  Created by Edanur Potuk on 29.10.2023.
//

#include <iostream>
#include "LinkedBag.hpp"
#include "Node.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    LinkedBag* myBag = new LinkedBag;
    
    /*
    myBag->add(7);
    myBag->add(11);
    myBag->add(5);
    myBag->add(13);
    myBag->add(7);
    myBag->add(31);
    myBag->add(0);
    myBag->add(7);
    std::cout<<myBag->sum()<<std::endl;
    std::cout<<"the frequency of the 7 is "<<myBag->getFrequencyOf(7)<<std::endl;

    myBag->remove(13);
    myBag->printBag();
    myBag->printReverseBag();
    
    myBag->deleting(7);

    myBag->printBag();
    std::cout<<"the frequency of the 7 is "<<myBag->getFrequencyOf(7)<<std::endl;

    myBag->add(7);
    myBag->add(31);
    myBag->add(7);
    myBag->add(7);
    myBag->add(7);
    myBag->add(7);
    myBag->printBag();
    myBag->remove(7);
    myBag->printBag();
    std::cout<<"the frequency of the 7 is "<<myBag->getFrequencyOf(7)<<std::endl;

    myBag->deleteAllOccur(7);
    std::cout<<"the frequency of the 7 is "<<myBag->getFrequencyOf(7)<<std::endl;
*/
    
    myBag->add(7);
    myBag->add(2);
    myBag->add(3);
    myBag->add(5);
    myBag->add(5);
    myBag->add(3);
    myBag->add(5);
    myBag->add(5);
    myBag->add(4);
    myBag->add(1);
    myBag->add(2);
    myBag->printBag();
    myBag->topla();
    myBag->deleting(5);
    myBag->printBag();
    myBag->printBag();
    std::cout<<" "<<std::endl;
    myBag->rec();
    
    myBag->printMiddle();
    
    myBag->removeDuplicate();
    myBag->del(5);
    return 0;
}
