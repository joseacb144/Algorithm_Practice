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
        
        while(j >= 0 && j > key){
           
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}

void displayArray(int A[], int size){
    for(int i = 0, i < size; i++)
        cout << A[i];
    cout << endl;
}


int main() {
    
    std::cout << "Hello, World!\n";
    
    
    return 0;
}
