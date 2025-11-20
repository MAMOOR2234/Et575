/*
Mamoor Ahmad
Nov 19, 2025
lab17, 2D array
*/
#include <iostream>
#include "lab17_function_Ahmad.cpp"

using namespace std;

int main(){
    cout<<" ---- example 1: array declaration ----"<<endl;
    array_dec();

      cout<<" ---- eample 2: print each value in a 2D array ----"<<endl;
      const int ROWSIZE = 5;
      int ar[3][ROWSIZE] ={
        {5, 10},
        {-2, -9},
        {6}
    };

    print_2d(ar,3);

    cout<<" ---- example 3: populating an array with numbers ----"<<endl;
    // delearing a 2D array

    int arr_num[2][3];

    //call the function
    populate_array(arr_num, 2, 3);
    print_array(arr_num, 2, 3);


    cout<<" ---- example 4: sum of all numbers in a 2D array ----"<<endl;
    int s = sum_all(arr_num, 2, 3);
    cout<<"The total sum  "<<s<<endl;


    cout<<" ---- example 5: sum numbers in a 2D array ----"<<endl;
    int c = total_odd(arr_num, 2, 3);
    cout<<"Total odd numbers = "<<c<<endl;

      cout << "\n\n----- HOMEWORK  -----\n" << endl;
   
    char choice;
   
    do {
        // Create a 2D array with 3 rows and 4 columns
        int homework_array[3][4];
       
        // Populate the array with random numbers
        populate(homework_array, 3, 4);
       
        // Display the array
        cout << "Generated 2D array:" << endl;
        print_homework_array(homework_array, 3, 4);
       
        // Calculate and display the average
        double avg = average(homework_array, 3, 4);
        cout << "Average of all numbers: " << avg << endl;
       
        // Ask user if they want another run
        cout << "\nDo you want another run? (y/n): ";
        cin >> choice;
        cout << endl;
       
    } while (choice == 'y' || choice == 'Y');
   
    cout << "Program ended!" << endl;

       return 0;
}