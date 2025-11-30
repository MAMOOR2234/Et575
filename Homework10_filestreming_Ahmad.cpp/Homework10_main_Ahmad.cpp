/*
Mamoor Ahmad
Nov 30, 2025
Homework 10 - File Streaming
*/

#include <iostream>
#include "Homework10_function_Ahmad.cpp"

using namespace std;

int main() {
    string filename = "Remembering_Earth.txt";
    
    cout << "----- Homework 10: File Streaming -----" << endl;
    
    // Task 1: Read and display file
    cout << endl << "Task 1: Reading file..." << endl;
    readFile(filename);
    
    // Task 2: Count words
    cout << endl << "Task 2: Counting words..." << endl;
    countWords(filename);
    
    // Task 3: Count 'Earth'
    cout << endl << "Task 3: Counting 'Earth'..." << endl;
    countEarth(filename);
    
    // Show final result
    cout << endl << "Final wordcounts.txt:" << endl;
    readFile("wordcounts.txt");
    
    return 0;
}