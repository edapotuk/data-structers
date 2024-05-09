//
//  main.cpp
//  random
//
//  Created by Edanur Potuk on 17.12.2023.
//

#include <stdio.h>
#include <stdbool.h>
#include <iostream>


void removeDuplicate(int arr[],int n){
    for (int i = 0; i<n; i++) {
        for (int j = i +1 ; j<n; j++) {
            if (arr[i]==arr[j]) {
                while (arr[j]==arr[n-1] && j != (n-1)) {
                    n--;
                }
                arr[j] = arr[n-1];
                n--;
            }
        }
    }
    
    int k;
    for (k = 0; k < n; k++)
        std::cout<< arr[k] << " ";
    
}


void mergeArray(int nums1[], int m, int nums2[], int n) {
        int i=m-1 , j=n-1 ;
        while(i>=0 && j>=0 ){
            if(nums1[i]>=nums2[j]){
                nums1[i+j+1]=nums1[i] ;
                i-- ;
                }else{
                    nums1[i+j+1]=nums2[j];
                    j-- ;
                }
        }
    std::cout<<"i and j ";
    std::cout<<i;
    std::cout<<j;
    std::cout<<" i and j";

        while(j>=0){
                    nums1[j]=nums2[j];
                    j-- ;
                }
    
    
    int q;
    for (q = 0; q < n+m; q++)
        std::cout<< nums1[q] << " ";
        std::cout<< std::endl;
    }

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        std::cout<< arr[i] << " ";
        std::cout<< std::endl;
}



int findFrequency(int numbers[],int n,int target){
    int freq = 0, i =0;
    bool found = false;

    while(i<n && found ==false){

        while(numbers[i] ==target){
            freq ++;
            i++;
            found = true;
        }
        i++;
    }
    std::cout<<freq;
    std::cout<<" ";

    return freq;
    
}


int mostFrequent(int arr[], int n)
{
    int maxcount = 0;
    int maxElement=0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = i; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
  
        if (count > maxcount) {
            maxcount = count;
            maxElement = arr[i];
        }
    }
    std::cout<<"hello cnm ";
    std::cout<<maxElement;
    return maxElement;
}

void pushZeros(int numbers[],int n){
    
    int count = 0;
    for (int i = 0; i<n; i++) {
        if (numbers[i]!=0) {
            std::swap(numbers[i], numbers[count]);
            count ++;
 
        }
    }
    

    int k;
    for (k = 0; k < n; k++)
        std::cout<< numbers[k] << " ";
        std::cout<< std::endl;
    
}

void sortBinary(int numbers[],int n){
    int count = 0;
    for (int i = 0; i<n; i++) {
        if (numbers[i]!=1) {
            std::swap(numbers[i], numbers[count]);
            count ++;
 
        }
    }
    

    int k;
    for (k = 0; k < n; k++)
        std::cout<< numbers[k] << " ";
        std::cout<< std::endl;
    
}


int main(int argc, const char * argv[]) {
    int number[] = {2,3,1,0,0,9,0,0,7,0};
    int numbers[] = {1,0,0,1,1,0,1,0,0,1,0,0};

    pushZeros(number, 10);
    std::cout<<"slkdfds ";
    sortBinary(numbers, 12);
    
    
}
