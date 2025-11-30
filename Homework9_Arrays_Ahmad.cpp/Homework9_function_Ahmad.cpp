/*
Mamoor Ahmad
Nov 30, 2025
Homework 9 - Arrays Application
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to get valid array size from user
int arraysize() {
    int size;
    
    do {
        cout << "Enter an array size between 1 and 100: ";
        cin >> size;
        
        if (size < 1 || size > 100) {
            cout << "Invalid size! Please enter a number between 1 and 100." << endl;
        }
    } while (size < 1 || size > 100);
    
    return size;
}

// Function to populate array with random numbers between 10-30
void randPopulate(int arr[], int size) {
    // Seed random number generator
    srand(time(0));
    
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 21 + 10; // Random numbers 10-30 (10 + 0 to 20)
    }
}

// Function to print array values
void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

// Function to reverse array values
void reverse(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    
    while (start < end) {
        // Swap elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
}