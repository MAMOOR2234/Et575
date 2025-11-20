/*
Mamoor Ahmad
Nov 20, 2025
Homework 7, loops and arrays
*/

#include <iostream> 
#include <cstdlib> 
#include <time.h> 
using namespace std;

//function to collect the size of an array 
int collect_size(){  
    int num;
    cout << "Enter the size of the array: ";
    cin >> num;
    return num;
} 

//function to populate an array 
void populate_numbers(int arr[], int s){ 
    // use loop to RANDOMLY generates number between 1 and 99 
    for(int i = 0; i < s; i++) {
        arr[i] = rand() % 99 + 1;
    }
} 

//function to print all numbers in an array 
void print_numbers(int arr[], int s){ 
    // use loop to print all numbers in an array 
    cout << "Array elements: ";
    for(int i = 0; i < s; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
} 

//function to find the minimum number in an array 
int array_min(int arr[], int s) 
{ 
    int min = arr[0];
    
    for(int i = 1; i < s; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
} 

//function to return the average of all numbers in an array 
float array_avg(int arr[], int s) 
{ 
    int sum = 0;
    
    for(int i = 0; i < s; i++) {
        sum = sum + arr[i];
    }
    
    float average = (float)sum / s;
    return average;
}