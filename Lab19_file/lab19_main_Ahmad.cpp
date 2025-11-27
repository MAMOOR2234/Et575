/**
 *  Mamoor Ahmad
 * Nov 24, 2025
 * Lab 19 - File and console input
 */
#include <iostream>
#include "lab19_function_Ahmad.cpp"

using namespace std;

int main(){
    cout<<"\n---Example 1: console input failure---"<<endl;
    checknumber();
    cout<<"\n---Example 2: console input failure in loop---"<<endl;
    cout<<"validatednumber = "<<validatenumber()<<endl;

    cout<<"\n---Example 3: read a file---"<<endl;
    readfile();

    cout<<"\n---Example 4: write a file---"<<endl;
    writefile("outputfile.txt");

    cout<<"\n---Example 5: append date into a file---"<<endl;
    appendfile("simplefile.txt");

    cout<<"\n-----EXERCISE------"<<endl;
    // Create a file and write the initial line
    createFile();
    // Append messages to the file
    appendToFile("This is the first appended line.");
   readFile("data_user.txt");
   
    return 0;
}