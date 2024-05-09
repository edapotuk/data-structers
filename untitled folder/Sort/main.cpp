//
//  main.cpp
//  Sort
//
//  Created by Edanur Potuk on 14.12.2023.
//

#include <stdio.h>
#include <stdbool.h>
#include <iostream>


int findMax(int* numbers, int bound){
    int maxIdx = 0;
    for (int i = 0; i < bound; i++) {
        if (numbers[i] > numbers[maxIdx] ) {
            maxIdx = i;
        }
    }
    return maxIdx;
}

void selectionSort(int* numbers, int size){
    int virtualBoundry = size;
    int temp;
    int maxIdx;
    for (int i = 0; i < size; i++) {
        maxIdx = findMax(numbers,virtualBoundry);
        temp = numbers[maxIdx];
        numbers[maxIdx] = numbers[virtualBoundry-1];
        numbers[virtualBoundry-1] = temp;
        //        std::swap(numbers[maxIdx],numbers[virtualBoundry-1]);

        virtualBoundry--;
    }
}

void bubbleSort(int* numbers, int size){
    bool swapped = true;
    int pass = 1;
    int temp;
    
    while (swapped && (pass < size)) {
        swapped = false;
        for (int i = 0; i < size - pass; i++) {
            if (numbers[i] > numbers[i+1]) {
                temp = numbers[i+1];
                numbers[i+1] = numbers[i];
                numbers[i] = temp;
                swapped = true;
            }
           
        }
        pass++;
    }
    
}
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


void repetitive(int arr[],int n){
    int all = n*(n-1)/2;
    
    for (int i = 0; i<n; i++) {
        all = all - arr[i];
    }
    
}

// A utility function to print an array
// of size n
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        std::cout<< arr[i] << " ";
        std::cout<< std::endl;
}





int binarySearch(int numbers[],int n,int target){

    int low=0;
    int high = n-1;
    int mid ;

    while (low <= high) {
        mid = (low + high)/2;

        if (numbers[mid]< target) {

            low  = mid+1;
        }
        else if (numbers[mid] > target){
            high = mid-1;
        }
        else{
            std::cout<<"edadasc ";
            std::cout<<mid;
            return mid;
        }
    }
    return -1;
    
}
int maxDistance(int arr[],int n){
    int maxD = -1;
    
    for (int i = 0; i<n; i++) {
        for (int j = n-1; j>=0; j--) {
            if (arr[i]==arr[j]) {
                maxD = j-i;
                return maxD;
            }
        }
    }
    
    return maxD;
}

int sequentialSearch(int number[],int n,int target){
    int i;
    for (i = 0; i<n && number[i] != target; i++);
    if (i == n) {
        return -1;
    }
    else
        std::cout<<i;
        return i;
}
void coctailSort(int numbers[],int n){
    bool swapped = true;
    int pass = 0;
    int temp;
    int boundary = n;
    while (swapped && (boundary != pass)) {
        swapped = false;
        for (int i = pass; i < boundary-1; i++) {
            if (numbers[i] > numbers[i+1]) {
                temp = numbers[i+1];
                numbers[i+1] = numbers[i];
                numbers[i] = temp;
                swapped = true;
            }
           
        }
        boundary--;
        for (int i = boundary; i > pass ; i--) {
            if (numbers[i] < numbers[i-1]) {
                temp = numbers[i-1];
                numbers[i-1] = numbers[i];
                numbers[i] = temp;
                swapped = true;
            }
        }
        pass++;
    }
}

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temporary arrays
    int L[n1];
    int R[n2];

    // Copy data to temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the two sorted arrays back into arr[left..right]
    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Same as (left+right)/2, but avoids overflow for large left and right
        int mid = left + (right - left) / 2;

        // Sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}



// Function to partition the array and return the index of the pivot
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choose the last element as the pivot
    int i = low - 1; // Index of the smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Swap arr[i+1] and arr[high] (put the pivot in its correct position)
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

// Function to perform quicksort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Find the pivot element such that elements smaller than the pivot
        // are on the left, and elements greater are on the right
        int pivotIndex = partition(arr, low, high);

        // Recursively sort the sub-arrays
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main(int argc, const char * argv[]) {
    int size = 7;
    int numbers[] = {3,5,1,35,76,2,10};
    printArray(numbers, size);
    quickSort(numbers, 0, size-1);
    printArray(numbers, size);
    
    
    
    
}
    
    
    
    //{3,5,1,35,76,2,10};
   /* bubbleSort(numbers, size);
    for (int i = 0; i < size; i++) {
        printf("%d ",numbers[i]);
    }*/
  
    
    /*
     
     selectionSort(numbers,size);
     printArray(numbers, size);
     std::cout<<"selam";
     myBubble(numbers, size);
     printArray(numbers, size);
     std::cout<<"YENI BIR DONEM BASLIYOR"<<std::endl;
     int number[] = {3,5,1,35,76,2,10,23,22,2};
     int n = 10;
     printArray(number, n);

     coctailSort(number, n);

     printArray(number, n);
     
     
    int arr[] = { 7,16,2,24,3,11,15};
     int N = sizeof(arr) / sizeof(arr[0]);
  insertionSort(arr, N);
      printArray(arr, N);
  int n = 9;

  int array[] = {1,2,3,4,5,6,8,9};

  printf("\n");
  printf("edaaaaaa");

  bubbleSort(numbers, size);
   for (int i = 0; i < size; i++) {
       printf("%d ",numbers[i]);
   }
  printf("edaaaaaa");
  repetitive(array, n);
  printf("sdfsdfvsdvcsdvdfvd");
  std::cout<<maxDistance(array, n);
    printf("xox");

    binarySearch(array, 8, 8);
    sequentialSearch(array, 8, 1);
    return 0;
     */


