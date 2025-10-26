/*
Mamoor Ahmad
oct 24, 2025
lab 12: scooping and predfined functions
*/
#include<iostream>
using namespace std;

// globel variables
int num = 8;

void doSomething(){
//global variable
num += 20;
cout<<"num in doSomething function: "<<num<<endl;
}

#include "lab12_functions.cpp"

int main(){
cout<<"\n ----- example 1: local variables ----- "<<endl;
int sum = add(2,7) + add(1,6); //sum is the local variable in function
cout<<"The total sum in main \t"<<sum<<endl;

cout<<"\n ----- example 2: Globel variables ----- "<<endl;
cout<<"num orignal value = \t"<<num<<endl;
doSomething();
num = 5;
cout<<"num in main function = \t"<<num<<endl;

cout<<"\n ----- example 3: hypotenuse ----- "<<endl;
float s1 = 2;
float s2 = 3;
float h = hyp(s1,s2);
printhyp(s1, s2, h);

cout << "\n----- Lab Exercise: Distance Calculation -----" << endl;
int x1 = getPositiveNumber("Enter x1 (greater than 0): ");
int y1 = getPositiveNumber("Enter y1 (greater than 0): ");
int x2 = getPositiveNumber("Enter x2 (greater than 0): ");
int y2 = getPositiveNumber("Enter y2 (greater than 0): ");

float d = distance2D(x1, y1, x2, y2);
printDistance(x1, y1, x2, y2, d);

    return 0;
}






