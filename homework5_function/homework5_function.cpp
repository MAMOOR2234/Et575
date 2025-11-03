/*
Mamoor Ahmad
Homework 5 - Functions
Program 1: Wind Chill Calculation
Program 2: Descending Order Entries
*/

#include <iostream>
#include <cmath>
using namespace std;

// PROGRAM 1: WIND CHILL CALCULATION FUNCTIONS

// Function to get and validate wind speed
int speed() {
int windSpeed;
do {
cout << "Enter wind speed (positive number less than 100 m/s): ";
cin >> windSpeed;
if (windSpeed <= 0 || windSpeed >= 100) {
cout << "Error: Wind speed must be positive and less than 100. Please try again." << endl;
}
} while (windSpeed <= 0 || windSpeed >= 100);
return windSpeed;
}

// Function to get and validate temperature
float temp() {
float temperature;
do {
cout << "Enter temperature (must be <= 10 and > -90 degrees Celsius): ";
cin >> temperature;
if (temperature > 10 || temperature <= -90) {
cout << "Error: Temperature must be <= 10 and > -90. Please try again." << endl;
}
} while (temperature > 10 || temperature <= -90);
return temperature;
}

// Function to calculate wind chill index
float windspeed(int windSpeed, float temperature) {
// Wind chill formula: 13.12 + 0.6215*t - 11.37*v^0.16 + 0.3965*t*v^0.16
double windChill = 13.12 + 0.6215 * temperature - 11.37 * pow(windSpeed, 0.16)
+ 0.3965 * temperature * pow(windSpeed, 0.16);
return windChill;
}

// Function to prompt the wind chill result
void prompt_result(float windChill) {
cout << "The wind index is: " << windChill << endl;
}

// PROGRAM 2: DESCENDING ORDER FUNCTIONS

// Function to collect a number from user
int collectNumber() {
int number;
cout << "Enter a number: ";
cin >> number;
return number;
}

// Function to check if numbers are in descending order
bool inOrder(int num1, int num2, int num3) {
return (num1 >= num2) && (num2 >= num3);
}

// Function to display result and ask if user wants to continue
void runProgram(int num1, int num2, int num3, bool desc_order) {
cout << "\nNumbers entered: " << num1 << ", " << num2 << ", " << num3 << endl;
if (desc_order) {
cout << "The numbers are in descending order." << endl;
} else {
cout << "The numbers are NOT in descending order." << endl;
}

char choice;
cout << "\nDo you want to run the program again? (y/n): ";
cin >> choice;

if (choice == 'y' || choice == 'Y') {
cout << "\n=== Running Program Again ===" << endl;
// Recursive call to continue the program
int newNum1 = collectNumber();
int newNum2 = collectNumber();
int newNum3 = collectNumber();
bool newOrder = inOrder(newNum1, newNum2, newNum3);
runProgram(newNum1, newNum2, newNum3, newOrder);
} else {
cout << "Program ended. Thank you!" << endl;
}
}

// MAIN FUNCTION

int main() {
cout << "--- HOMEWORK 5 FUNCTIONS ---" << endl;

// Program 1: Wind Chill Calculation
cout << "\n ---- PROGRAM 1: WIND CHILL CALCULATION ---" << endl;
int s = speed();
float t = temp();
prompt_result(windspeed(s, t));

// Program 2: Descending Order Check
cout << "\n --- PROGRAM 2: DESCENDING ORDER CHECK ---" << endl;
int num1 = collectNumber();
int num2 = collectNumber();
int num3 = collectNumber();
bool desc_order = inOrder(num1, num2, num3);
runProgram(num1, num2, num3, desc_order);

return 0;
}