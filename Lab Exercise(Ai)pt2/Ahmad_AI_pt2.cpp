/*
<Mamoor Ahmad>
Lab_AI_part2 - C++ + AI Exercise: Temperature Converter
Oct 10, 2025
*/
#include<iostream>
using namespace std;

int main(){
    cout<<"\n------ Example 1: baseline AI-generated idea (Celsius -> Fahrenheit) ----- "<<endl;
    // Simple conversion using the formula: F = 1.8*C + 32
    double c = 20; // test value: 20 C should be 68 F
    double f = 1.8 * c + 32;
    cout<<c<<" C is "<<f<<" F"<<endl;

    cout<<"\n------ Example 2: add user input (only concepts from class) ----- "<<endl;
    // Ask the user for Celsius and convert to Fahrenheit
    double userC = 0;
    cout<<"Enter temperature in Celsius: ";
    cin>>userC;
    double userF = 1.8 * userC + 32;
    cout<<userC<<" C is "<<userF<<" F"<<endl;

    cout<<"\n------ Example 3: add conversion choice using switch ----- "<<endl;
    // Let the user pick which way to convert
    int choice = 0;
    cout<<"Choose conversion type:"<<endl;
    cout<<"1. Celsius to Fahrenheit"<<endl;
    cout<<"2. Fahrenheit to Celsius"<<endl;
    cout<<"Enter choice: ";
    cin>>choice;

    // Collect temperature based on choice and convert
    double inputTemp = 0;
    switch(choice){
        case 1: {
            cout<<"Enter temperature in Celsius: ";
            cin>>inputTemp;
            double outF = 1.8 * inputTemp + 32;          // F = 1.8*C + 32
            cout<<inputTemp<<" C is "<<outF<<" F"<<endl;
            break;
        }
        case 2: {
            cout<<"Enter temperature in Fahrenheit: ";
            cin>>inputTemp;
            double outC = (5.0/9.0) * (inputTemp - 32);  // C = (5/9)*(F - 32)
            cout<<inputTemp<<" F is "<<outC<<" C"<<endl;
            break;
        }
        default:
            cout<<"Error: Invalid choice."<<endl;
            break;
    }

    // Program end
    return 0;

}

/*
---------------------------------------------------------
Reflection-in-Code (Part 2: Review and Understand)
---------------------------------------------------------

// 1. Does the AI code use C++ concepts you're unfamiliar with? Explain.
// No. It uses only basics : variables, arithmetic, cout/cin, if/else, and switch.

// 2. Are there any issues or improvements you noticed? Explain.
// Improvement: Added user choice (1 or 2) with switch to handle both directions.
// Validation could be added, but I stayed within class concepts as required.

// 3. What test cases did you try, and why? Explain.
// Tested 20 C -> expected 68 F 
// Tested 0 C -> expected 32 F 
// Tested 98.6 F -> expected ~37 C 
*/