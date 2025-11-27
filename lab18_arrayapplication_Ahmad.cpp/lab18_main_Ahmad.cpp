/*
Mamoor Ahmad
Nov 26, 2025
Lab 18 - Array Application
*/

#include <iostream>
#include "lab18_function_Ahmad.cpp"

using namespace std;

int main() {
    int numbers[MAX_SIZE];
    int actualSize;
    double averageValue;
    int closestNumber;
    
    cout << "----- Lab 18: Array Application -----" << endl;
    
    // Collect numbers from user
    actualSize = collectnumber(numbers);
    
    if (actualSize == 0) {
        cout << "No numbers were entered." << endl;
        return 0;
    }
    
    // Display the collected numbers
    cout << endl << "Collected numbers: ";
    for (int i = 0; i < actualSize; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    // Calculate average
    averageValue = averagenumber(numbers, actualSize);
    
    // Find closest number to average
    closestNumber = closestmean(numbers, actualSize, averageValue);
    
    // Print results
    cout << endl << "Results:" << endl;
    printresult(averageValue, closestNumber);
    
    return 0;
}