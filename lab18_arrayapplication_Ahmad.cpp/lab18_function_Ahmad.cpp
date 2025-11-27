/*
Mamoor Ahmad
Nov 26, 2025
Lab 18 - Array Application
*/

#include <iostream>

using namespace std;

const int MAX_SIZE = 5;

// Function to collect user-entered non-zero integers
int collectnumber(int arr[]) {
    int count = 0;
    int number;
    
    cout << "Enter up to 5 non-zero integers (enter 0 to stop):" << endl;
    
    for (int i = 0; i < MAX_SIZE; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> number;
        
        if (number == 0) {
            break;
        }
        
        arr[count] = number;
        count++;
    }
    
    return count;
}

// Function to compute the average of numbers in the array
double averagenumber(int arr[], int size) {
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    
    return (double)sum / size;
}

// Function to find the number closest to the average
int closestmean(int arr[], int size, double average) {
    int closest = arr[0];
    double minDifference;
    
    if (arr[0] > average) {
        minDifference = arr[0] - average;
    } else {
        minDifference = average - arr[0];
    }
    
    for (int i = 1; i < size; i++) {
        double difference;
        
        if (arr[i] > average) {
            difference = arr[i] - average;
        } else {
            difference = average - arr[i];
        }
        
        if (difference < minDifference) {
            minDifference = difference;
            closest = arr[i];
        }
    }
    
    return closest;
}

// Function to display the results
void printresult(double average, int closest) {
    cout << "The closest number to average " << average << " is " << closest << "." << endl;
}