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
    bool isValid = false;
    
    do {
        cout << "Enter an array size between 1 and 100: ";
        cin >> size;
        
        if (size >= 1 && size <= 100) {
            isValid = true;
        } else {
            cout << "Invalid size! Please enter between 1 and 100." << endl;
        }
    } while (!isValid);
    
    return size;
}

// Function to populate array with random numbers between 10-30
void randPopulate(int arr[], int size) {
    srand(time(0));
    
    for (int i = 0; i < size; i++) {
        arr[i] = (rand() % 21) + 10; // 10 to 30
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
    int temp;
    
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}