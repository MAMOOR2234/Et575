# Et575
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // CLASS EXAMPLES
    cout << "-----Example 1: cout date -----" << endl;
    cout << "this is a C++ code";
    //variables = temporary storage of data 
    //declare the variable first
    string username = "peterpen123";
    cout << "\nWelcome to C++ " << username << endl;

    cout << "-----Example 2: cin date -----" << endl;
    cin >> username;
    cout << "New user is " << username << endl;

    cout << "-----Example 3: data types -----" << endl;
    //declare variable 
    char sym = '%';
    float distance = 5.63;
    int number = 8;

    cout << "Given symbol = " << sym << endl;
    cout << "Given distance = " << distance << endl;
    cout << "Given number = " << number << endl;

    // EXERCISE: Variable Declaration and User Input
    cout << "\n===== EXERCISE: User Information Collection =====" << endl;
    
    // Declare the four required variables
    string country;
    char gender;
    int zipcode;
    double rate;
    
    // Prompt user for input
    cout << "Please enter the following information:" << endl;
    cout << "Country: ";
    cin >> country;
    
    cout << "Gender (f for female, m for male, o for others): ";
    cin >> gender;
    
    cout << "Zip code: ";
    cin >> zipcode;
    
    cout << "Tax rate (with decimal places): ";
    cin >> rate;
    
    // Display the results with proper alignment using \t
    cout << "\n===== COLLECTED INFORMATION =====" << endl;
    cout << "Entered country:\t" << country << endl;
    cout << "Selected gender:\t" << gender << endl;
    cout << "Zip code:\t\t" << zipcode << endl;
    cout << "Tax rate:\t\t" << rate << endl;

    return 0;
}