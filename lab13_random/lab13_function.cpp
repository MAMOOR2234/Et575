// Mamoor Ahmad
// Sep 15,2025
// lab13, random variables 
#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;
// function to return a random number
int random_number(){
    return rand();
}

// example 2: different random number 
int different_random(){
    srand(time(0));
    return rand();
}

//example3: range of random number 
// generate randome number between 0 and 9 
int random_0_9(){
    return rand() % 10;
}
// example 4: specific range of randome number 
int random_neg10_5(){
    return -10 + rand() % 16;
}

//Exercise
// function that generates a random number between 1 and 6
int random_1_6(){
    return 1 + rand() % 6;
}

// funtion to compare if two number are 1s
bool compare_ones(int r1, int r2){
    return (r1 == 1 && r2 == 1);
}

// function to prompt result 
void printresult(bool result){
    if(result){
        cout<<"congrats! You got a snake eyes"<<endl;
    }else{
        cout<<"Better luck next time"<<endl;
    }
}
