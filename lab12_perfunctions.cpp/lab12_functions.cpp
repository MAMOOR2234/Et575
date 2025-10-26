/*
Mamoor Ahmad
oct 24, 2025
lab 12: scooping and predfined functions
*/
#include<iostream>
#include<cmath>

using namespace std;

// example 1: function that calculates and returns the sum of two numbers
int add(int num1, int num2){
int sum = num1 + num2; // sum is a local variable iny
cout<<"The sum is function add() is \t"<<sum<<endl;
return sum;
}

// example 3: use predefine
// function passes two argument, calculate and returns the hypotheneus of a right triangle.
float hyp(float side1, float side2){
return sqrt(pow(side1, 2)+ pow(side2, 2));
}

// function to print result
void printhyp(float s1, float s2,float h){
cout<<"The hypothenus of side"<<s1<<" and "<<s2<<" is "<<h<<endl;
}

// Function 1: Get a number greater than zero
int getPositiveNumber(const string& prompt) {
    int num;
    do {
        cout << prompt;
        cin >> num;
        if (num <= 0) {
            cout << "Please enter a number greater than zero.\n";
        }
    } while (num <= 0);
    return num;
}

// Function 2: Calculate distance between two points
float distance2D(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Function 3: Print the distance result
void printDistance(int x1, int y1, int x2, int y2, float d) {
    cout << "The distance of points (" << x1 << ", " << y1 << ") and ("
         << x2 << ", " << y2 << ") is " << d << endl;
}