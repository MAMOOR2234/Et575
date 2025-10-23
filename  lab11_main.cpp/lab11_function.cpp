// Mamoor Ahmad
// Sep 15,2025
// lab11, introduction to function
#include<iostream>

using namespace std;
// void functioin does not return any value
void printhello(){
    cout<<"Hello function"<<endl;
    return;
}

// void function with perameters
void greeting(string name){
    cout<<"Good afternoon "<<name<<endl;
    return;
}

// example 3, function that return
int returnfive(){
    return 5;
}

// example 4, any code after returning will not be executed
void printsome(){
    cout<<"Something"<<endl;
    return;
    cout<<"After the return"<<endl;
}

// example 5, function that calculates and return
float areasquare(float side){
    float area = side*side;
    return area;
    // code below will never execute
    // int num = 10;
    // return num;
    // num *= 2;
    // return num;
}

//example 5, function that calculates and return the area of a square
float areasquare2(float side){
    float area = side*side;
    return area;
}

//example 6, function that calculates and returns the product of two numbers
int product(int n1, int n2){
    return n1*n2;
}

// example 7, function that calculates and return 
double fah(double celsius){
    return celsius*1.8 + 32;
}

void printfah(double f){
    cout<<"The Fahrenheit temperature is:"<<f<<endl;
}

// example 8: check a number 
string checknumber(int number){
    if(number== 0){
        return "zero";
    }
    else if(number>0){
        return "positive";
    }
    else{
        return "negative";
    }
}

void printnumber(string n){
    cout<<"The number is "<<n<<endl;
}

// example 8:function to check if a number is even
bool isEven(int number){
    if(number % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

void printEvenResult(int number, bool result){
    cout<<"Is "<<number<<" even? "<<result<<endl;
}
