/*
Mamoor Ahmad
Homework 6, functions and introduction to pointers and reference
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function 1: generate random integer between 1 and 20
int rand_side() {
    srand(time(0));               // seed RNG
    return (rand() % 20) + 1;     // 1–20 inclusive
}

// Function 2: calculate hypotenuse
double hyp(int side1, int side2) {
    return sqrt(pow(side1, 2) + pow(side2, 2));
}

// Function 3a: standard print version
void print_result(int side1, int side2, double hypotenuse) {
    cout << fixed << setprecision(2);
    cout << "The hypotenuse of a right angle with side "
         << side1 << " and " << side2
         << " is = " << hypotenuse << endl;
}

// Function 3b: overloaded version to match given main()
void print_result(int side1, int side2, double (*fptr)(int, int)) {
    double result = fptr(side1, side2);
    print_result(side1, side2, result);
}
