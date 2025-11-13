/*
Mamoor Ahmad
Nov 12, 2025
lab 14: introduction to arrays, pointers and references
*/
#include <iostream>
#include <string>
using namespace std;
#include "lab15_function_Ahmad.cpp"

int main() {
    cout << "\n-----Example 1: Pointers -----" <<endl;
    pointer_ref();

    cout << "\n-----Example 2:  reference and pointer in a function -----" <<endl;
    string something = "Hello World";
    printvalue(something);
    printbyreference(something);
    printaddress(&something);
    printvalue(something);
    printvalue(something);

    cout << "\n-----Example 3: Arrays -----" <<endl;
    arrays();

    cout << "\n --- Example 4: array sizes -----" <<endl;
    sizeofarrays();

    cout << "\n --- Example 5: loop in an array  -----" <<endl;
    looparrays();

    cout << "\n-----Lab Exercise: Find Maximum Score -----" << endl;
    exercise();
    
    return 0;
}