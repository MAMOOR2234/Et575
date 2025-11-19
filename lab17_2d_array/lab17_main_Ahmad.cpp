/*
Mamoor Ahmad
Nov 19, 2025
lab17, 2D array
*/
#include <iostream>
#include "lab17_function_Ahmad.cpp"

using namespace std;

int main() {
    cout<<"\n---example 1: array declaration---"<<endl;
    array_dec();

    cout<<"\n---example 2: print each value in a  2d array---"<<endl;
    const int rowsize = 5;
     int array[3][rowsize] ={
        {5, 10},
        {-2, -9},
        {6}    
    };
    print2d(array, rowsize);

    cout<<"\n---example 3: populating an array with numbers---"<<endl;
    // declare a 2D array 
    int arr_num[2][3];

    // call the function 
    populate_array(arr_num, 2, 3);
    print_array(arr_num, 2, 3);

    cout<<"\n --- example 4: sum all number in a 2D array---"<<endl;
    int s = sum_all(arr_num, 2, 3);
    cout<<"The total sum  "<<s<<endl;

    cout<<"\n --- example 5:odd numbers in a 2D array---"<<endl;
    int c = total_odd(arr_num, 2, 3);
    cout<<"Total odd numbers  "<<c<<endl;
    return 0;
}
