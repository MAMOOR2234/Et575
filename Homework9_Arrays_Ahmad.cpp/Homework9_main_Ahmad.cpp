/*
Mamoor Ahmad
Nov 30, 2025
Homework 9 - Arrays Application
*/

#include <iostream>
#include "Homework9_function_Ahmad.cpp"

using namespace std;

int main() {
    // Get array size from user
    int sizearray = arraysize();
    
    // Declare array with the obtained size
    int noise[sizearray];
    
    // Populate array with random values
    randPopulate(noise, sizearray);
    
    // Display original array
    cout << endl << "Original Set:" << endl;
    print(noise, sizearray);
    
    // Reverse the array
    reverse(noise, sizearray);
    
    // Display reversed array
    cout << endl << "Reversed Set:" << endl;
    print(noise, sizearray);
    
    return 0;
}