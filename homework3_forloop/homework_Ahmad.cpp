/* Mamoor Ahmad
Oct 17, 2025
Homework 3 - for loop
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "\n----Program 1: Count positive, negative, and zero numbers----\n" << endl;
    
    // Program 1: Count positive, negative, and zero numbers
    int num;
    int count_positive = 0;
    int count_negative = 0;
    int count_zero = 0;
    
    // Use for loop to read 10 numbers
    for(int i = 1; i <= 10; i++){
        cout << "Enter number " << i << ": ";
        cin >> num;
        
        // Check if number is positive, negative, or zero
        if(num > 0){
            count_positive++;
        }
        else if(num < 0){
            count_negative++;
        }
        else{
            count_zero++;
        }
    }
    
    // Display results
    cout << "Total positive numbers = " << count_positive << endl;
    cout << "Total negative numbers = " << count_negative << endl;
    cout << "Total zeros = " << count_zero << endl;
    
    cout << "\n----Program 2: Sales calculation----\n" << endl;
    
    // Program 2: Sales calculation
    int num_days;
    double daily_sales;
    double total_sales = 0;
    double average_sales;
    
    // Ask user for number of days
    cout << "Enter the number of days: ";
    cin >> num_days;
    
    // Loop through each day to get sales figures
    for(int day = 1; day <= num_days; day++){
        cout << "Enter sales figure for day " << day << ": $";
        cin >> daily_sales;
        total_sales += daily_sales;  
    }
    
    // Calculate average sales
    average_sales = total_sales / num_days;
    
    // Display results
    cout << "Total sales $ " << total_sales << " for " << num_days << " days." << endl;
    cout << "Average daily sales $ " << average_sales << endl;
    
    return 0;
}