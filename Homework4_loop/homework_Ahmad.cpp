/* Mamoor Ahmad
Oct 17, 2025
Homework 4: Loops
*/

#include <iostream>
using namespace std;

// Global variable for Question 3
const int dimension = 11;

int main()
{
    cout << "\n---- Question 1: Validate number using do-while loop ----\n" << endl;
    
    // Question 1: Validate number using do-while loop
    int user_num;
    
    cout << "--- Question 1 ---" << endl;
    cout << "Enter a number: ";
    cin >> user_num;
    
    // Do-while loop to validate input
    do {
        if(user_num < 10) {
            cout << user_num << " is invalid! Please enter a number greater than 10: ";
            cin >> user_num;
        }
    } while(user_num < 10);
    
    // Display valid number
    cout << user_num << " is a valid number!" << endl;
    
    cout << "\n---- Question 2: Print numbers between two values using while loop ----\n" << endl;
    
    // Question 2: Print numbers between two values using while loop
    int num1, num2;
    int min_num, max_num;
    
    cout << "--- Question 2 ---" << endl;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    
    // Determine minimum and maximum numbers
    if(num1 <= num2) {
        min_num = num1;
        max_num = num2;
    }
    else {
        min_num = num2;
        max_num = num1;
    }
    
    // Print numbers using while loop
    cout << "RESULT = ";
    int current_num = min_num;
    while(current_num <= max_num) {
        cout << current_num << " ";
        current_num++;
    }
    cout << endl;
    
    cout << "\n---- Question 3: Graphing letter r with # sign ----\n" << endl;
    
    // Question 3: Graphing letter r with nested for loops
    cout << "--- Question 3 ---" << endl;
    
    // Nested for loops to create the letter 'r'
    for(int row = 1; row <= dimension; row++) {
        for(int col = 1; col <= dimension; col++) {
            // Create the shape of letter 'r'
            if(col == 1) {
                // Vertical stem
                cout << "#";
            }
            else if(row == 1 && col <= dimension/2 + 1) {
                // Top horizontal part
                cout << "#";
            }
            else if(row == dimension/2 + 1 && col <= dimension/2 + 1) {
                // Middle horizontal part
                cout << "#";
            }
            else if(col == dimension/2 + 1 && row <= dimension/2 + 1) {
                // Right vertical part
                cout << "#";
            }
            else if(row > dimension/2 + 1 && col == row) {
                // Diagonal part
                cout << "#";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}