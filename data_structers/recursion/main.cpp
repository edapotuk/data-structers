//
//  main.cpp
//  recursion
//
//  Created by Edanur Potuk on 5.11.2023.
//

#include <iostream>



void pushZerosToEnd(int numbers[], int N) {
    int count = 0; // Count of non-zero elements
    
    // Traverse the array, and for each non-zero element, move it to the front manually
    for (int i = 0; i < N; i++) {
        if (numbers[i] != 0) {
            std::swap(numbers[i],numbers[count]);
            std::cout<<"eda"<<" ";
            count++;
        }
        std::cout<<"babe"<<" ";
    }
    for (int i = 0; i < N; i++) {
        std::cout<<numbers[i]<<" ";
    }
    
}
void hanoi(int n, char source,char dest,char aux){
    if(n==1){
        printf("move to 1 %c to %c \n",source,dest);
        return;
    }
    hanoi(n-1, source, aux, dest);
    printf("move to %d %c to %c \n",n,source,dest);
    hanoi(n-1, aux, dest, source);
}




int main(int argc, const char * argv[]) {
    
    hanoi(3, 'A', 'C', 'B');

    int numbers[]={0,0,2,3,0,1,0,6,0,0,9,7,0,0};
      int N = 14;
      
      pushZerosToEnd(numbers,N);
    
    

}
