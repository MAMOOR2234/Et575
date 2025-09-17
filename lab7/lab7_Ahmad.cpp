// Mamoor Ahmad
// Sep 17,2025
// lab7, branching mechanism using switch-case statement
#include<iostream>

using namespace std;

int main(){
    cout<<"\n------ Lab Exercise: Simple Calculator ----- "<<endl;
    // Simple Calculator Program using switch statement
    double firstNumber, secondNumber;
    char operationChoice;
    
    // Step 1: Get first number
    cout<<"Enter the first number: ";
    cin>>firstNumber;
    
    // Step 2: Get second number
    cout<<"Enter the second number: ";
    cin>>secondNumber;
    
    // Step 3: Get operation choice
    cout<<"Choose an operation (+, -, *, /, %, q to quit): ";
    cin>>operationChoice;
    
    // Step 4: Use switch-case to perform operation
    switch(operationChoice){
        case '+':
            cout<<"Result: "<<firstNumber<<" + "<<secondNumber<<" = "<<(firstNumber + secondNumber)<<endl;
            break;
            
        case '-':
            cout<<"Result: "<<firstNumber<<" - "<<secondNumber<<" = "<<(firstNumber - secondNumber)<<endl;
            break;
            
        case '*':
            cout<<"Result: "<<firstNumber<<" * "<<secondNumber<<" = "<<(firstNumber * secondNumber)<<endl;
            break;
            
        case '/':
            if(secondNumber != 0){
                cout<<"Result: "<<firstNumber<<" / "<<secondNumber<<" = "<<(firstNumber / secondNumber)<<endl;
            }
            else{
                cout<<"Error: Division by zero is not allowed!"<<endl;
            }
            break;
            
        case '%':
            if(secondNumber != 0){
                int int1 = (int)firstNumber;
                int int2 = (int)secondNumber;
                cout<<"Result: "<<int1<<" % "<<int2<<" = "<<(int1 % int2)<<endl;
            }
            else{
                cout<<"Error: Modulus by zero is not allowed!"<<endl;
            }
            break;
            
        case 'q': case 'Q':
            cout<<"Exiting calculator program. Goodbye!"<<endl;
            break;
            
        default:
            cout<<"Error: Invalid operation entered!"<<endl;
            break;
    }
    
    return 0;
}