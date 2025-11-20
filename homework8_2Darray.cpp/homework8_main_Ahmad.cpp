/*
Mamoor Ahmad
Nov 20, 2025
Homework 8, 2D arrays
*/
#include <iostream>
#include <iomanip>
#include "homework8_function_Ahmad.cpp"
using namespace std;
// Function declarations
void searchValue(int ar[][4], int searchValue, int position[]);
void displayMessage(int searchValue, int position[]);
int main() {
    int ar[ROWCOL_ARRAY][ROWCOL_ARRAY] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    int searchNum;
    cout << "Enter a number to search for: ";
    cin >> searchNum;
    
    // array to store position (row and column)
    int position[2];
    
    // call function to search for a value in a 2D array
    searchValue(ar, searchNum, position);
    
    // call function to display a message
    displayMessage(searchNum, position);
    
    return 0;
}