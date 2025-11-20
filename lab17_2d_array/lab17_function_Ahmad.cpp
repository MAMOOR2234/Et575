/*
Mamoor Ahmad
Nov 19, 2025
lab17, 2D array
*/
#include <iostream>

using namespace std;

using namespace std;
// eample 1: declearing a 2D array
void array_dec(){
    int array[3][5] ={
        {5, 10},
        {-2, -9},
        {6}
    };

    cout<<"3rd element of second row: "<<array[1][2]<<endl;
}

// eample 2, functio to print each value in a 2D array
const int NUMCOLS = 5;
void print_2d(int a[][NUMCOLS], int rowsize){
    for(int row = 0; row <rowsize; row++){
        for(int col = 0;   col<NUMCOLS; col++){
            cout<<a[row][col]<<"\t";
        }
        cout<<endl;
    }
}

// example 3, defone a function to populate a 2D array
void populate_array(int arr[][3], int rowsize, int colsize){
    for(int row = 0; row<rowsize; row++){
        for(int col = 0; col<colsize; col++){
            int n;
            cout<<"Enter a number: ";
            cin>>n;
            arr[row][col] = n;
           
        }
    }
}

void print_array(int arr[][3], int rowsize, int colsize){
    for(int row = 0; row<rowsize; row++){
        for(int col = 0; col<colsize; col++){
            cout<<arr[row][col]<<"\t";
        }
        cout<<endl;
    }
}

// example 4: function that sum all the elements in a 2D array anf return the total sum
int sum_all(int arr[][3], int rowsize, int colsize){
    int sum = 0;
    for(int row = 0; row < rowsize; row++){
        for(int col = 0; col < colsize; col++){
            sum += arr[row][col];
        }
    }
    return sum;
}
// example 5: function that returns the total of odd numbers in a 2D array
int total_odd(int arr[][3], int rowsize, int colsize){
    int counter_odd = 0;
    for(int row = 0; row < rowsize; row++){
        for(int col = 0; col < colsize; col++){
            if(arr[row][col] % 2 == 1 && arr[row][col] != 0){
                counter_odd++;
            }
        }
    }
    return counter_odd;
}

// Function to populate the 2D array with random numbers between 0-100
void populate(int arr[][4], int rowsize, int colsize) {
    for(int row = 0; row < rowsize; row++) {
        for(int col = 0; col < colsize; col++) {
            arr[row][col] = rand() % 101; // Random number between 0-100
        }
    }
}

// Function to calculate the average of all numbers in the 2D array
double average(int arr[][4], int rowsize, int colsize) {
    int sum = 0;
    int totalElements = rowsize * colsize;
   
    for(int row = 0; row < rowsize; row++) {
        for(int col = 0; col < colsize; col++) {
            sum += arr[row][col];
        }
    }
   
    return static_cast<double>(sum) / totalElements;
}

// Function to print the 2D array
void print_homework_array(int arr[][4], int rowsize, int colsize) {
    for(int row = 0; row < rowsize; row++) {
        for(int col = 0; col < colsize; col++) {
            cout << arr[row][col] << "\t";
        }
        cout << endl;
    }
}