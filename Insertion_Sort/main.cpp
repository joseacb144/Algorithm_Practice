//
//  main.cpp
//  insertionSort_1
//
//  Created by Jose Chavez on 7/5/20.
//  Copyright © 2020 Jose Chavez. All rights reserved.
//

#include <iostream>
using namespace std;

void insertionSort(int A[], int size){
    int i, key, j;
    for(i = 1; i < size; i++){
        
        key = A[i];
        j = i-1;
        
        while(j >= 0 && A[j] > key){
           
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}

void displayArray(int A[], int size){
    for(int i = 0; i < size; i++)
        cout << A[i] << " ";
    cout << endl;
}


int main() {
    
    int A[] = {50, 3, 20, 11, 1, 8};
    int n = sizeof(A)/sizeof(A[0]);
    
    // This should output the size of the (number of elements) in A
    cout << "The size of A is: " << n << endl;
    
    // Display the array before sorting
    cout << "Array A contains the following elements: ";
    displayArray(A,n);
    
    // Display the array after sorting
    cout << "Array A is now sorted: ";
    insertionSort(A, n);
    displayArray(A, n);
    
    return 0;
}
