/*
Mamoor Ahmad
Nov 20, 2025
Homework 7, loops and arrays
*/
#include <iostream> 
#include <cstdlib> 
#include <time.h> 
#include "homework7_function_ahmad.cpp"
using namespace std;

// Function declarations
int collect_size();
void populate_numbers(int arr[], int s);
void print_numbers(int arr[], int s);
int array_min(int arr[], int s);
float array_avg(int arr[], int s);

int main() 
{ 
    srand(time(0)); 
    
    // declare variable num to save the size of an array 
    int num = collect_size();
    
    // declare an array array_name with size num 
    int a[num];
    
    // use function to populate the array with random numbers
    populate_numbers(a, num); 
    print_numbers(a, num); 
    cout << "Minimum number: \t" << array_min(a, num) << endl; 
    cout << "Average of numbers: \t" << array_avg(a, num) << endl; 

    return 0; 
}