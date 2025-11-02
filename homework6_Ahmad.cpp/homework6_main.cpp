/*
Mamoor Ahmad
Homework 6, functions and introduction to pointers and reference
*/
#include <iostream>
#include "homework6_function.cpp"
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
// Function 1: generate random integer between 1 and 20
int main() {
    int side1 = rand_side();
    int side2 = rand_side();
    hyp(side1, side2);
    print_result(side1, side2, hyp);
    return 0;
}
