/*
Mamoor Ahmad
Nov 30,2025
Homework 9 - Arrays Application
*/

#include <iostream>
#include "Homework9_function_Ahmad.cpp"

using namespace std;

int main() {
    int sizearray = arraysize();
    int noise[sizearray];
    
    randPopulate(noise, sizearray);
    
    cout << endl << "Original Set:" << endl;
    print(noise, sizearray);
    
    reverse(noise, sizearray);
    
    cout << endl << "Reversed Set:" << endl;
    print(noise, sizearray);
    
    return 0;
}