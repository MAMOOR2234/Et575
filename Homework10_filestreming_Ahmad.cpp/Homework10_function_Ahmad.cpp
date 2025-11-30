/*
Mamoor Ahmad
Nov 30, 2025
Homework 10 - File Streaming
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to read and display file contents
void readFile(string filename) {
    ifstream fin;
    fin.open(filename);
    
    if (fin.fail()) {
        cout << "Error opening file: " << filename << endl;
        return;
    }
    
    string line;
    cout << "--- Contents of " << filename << " ---" << endl;
    while (getline(fin, line)) {
        cout << line << endl;
    }
    cout << "--- End of file ---" << endl;
    
    fin.close();
}

// Function to count words and write to wordcounts.txt
void countWords(string filename) {
    ifstream fin;
    fin.open(filename);
    
    if (fin.fail()) {
        cout << "Error opening file: " << filename << endl;
        return;
    }
    
    string word;
    int count = 0;
    
    while (fin >> word) {
        count++;
    }
    fin.close();
    
    ofstream fout;
    fout.open("wordcounts.txt");
    fout << "Mamoor Ahmad" << endl;
    fout << "Total number of words: " << count << endl;
    fout.close();
}

// Function to count occurrences of 'Earth' and append to wordcounts.txt
void countEarth(string filename) {
    ifstream fin;
    fin.open(filename);
    
    if (fin.fail()) {
        cout << "Error opening file: " << filename << endl;
        return;
    }
    
    string word;
    int count = 0;
    
    while (fin >> word) {
        if (word == "Earth") {
            count++;
        }
    }
    fin.close();
    
    ofstream fout;
    fout.open("wordcounts.txt", ios::app);
    fout << "The word 'Earth' appears " << count << " times in the document." << endl;
    fout.close();
}