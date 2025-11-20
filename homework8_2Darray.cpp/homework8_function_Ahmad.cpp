/*
Mamoor Ahmad
Nov 20, 2025
Homework 8, 2D arrays
*/
#include <iostream>
using namespace std;

const int ROWCOL_ARRAY = 4;

// function to search for a value in a 2D array
void searchValue(int ar[][ROWCOL_ARRAY], int searchValue, int position[]) {
    bool found = false;
    
    for(int row = 0; row < ROWCOL_ARRAY; row++) {
        for(int col = 0; col < ROWCOL_ARRAY; col++) {
            if(ar[row][col] == searchValue) {
                position[0] = row;
                position[1] = col;
                found = true;
                return;
            }
        }
    }
    
    // if value not found
    if(!found) {
        position[0] = -1;
        position[1] = -1;
    }
}

// function to display a message
void displayMessage(int searchValue, int position[]) {
    if(position[0] == -1) {
        cout << "Number " << searchValue << " was not found" << endl;
    } else {
        cout << "Number " << searchValue << " was found in row " << position[0] 
             << " and column " << position[1] << endl;
    }
}