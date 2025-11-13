/*
Mamoor Ahmad
Nov 12, 2025
lab 14: introduction to arrays, pointers and references
*/
#include <string>
#include <iostream>

using namespace std;

void pointer_ref(){
    int num = 12;
    char c = 'T';
    string n = "Peter";

    // declare the pointer
    int* pointerint;
    char* pointerchar;
    string* pointerstring;

    // testing the memory address (WARNING: uninitialized pointers!)
    cout<<"memory address of int "<<pointerint << endl;

    // pointer with initial value. Value is the memory address of the pointed variable
    pointerint = &num;
    pointerchar = &c;
    pointerstring = &n;

    //check reference value of each pointer
    cout<<"Reference value int = "<<*pointerint<<endl;
    cout<<"Reference value char = "<<*pointerchar<<endl;
    cout<<"Reference value string = "<<*pointerstring<<endl;

    //dereference operators (same as above)
    cout<<"Dereference value of int "<<*pointerint<<endl;
    cout<<"Dereference value of char "<<*pointerchar<<endl;
    cout<<"Dereference value of string "<<*pointerstring<<endl;
}

// example 2
// function that passes a value
void printvalue(string v){
    cout<<"Value = "<<v<<endl;
}

// function that passes by reference
void printbyreference(string& v){
    cout<<"Passed by reference = \t"<<v<<endl;
}

//function that passes a memory address - FIXED FUNCTION NAME
void printaddress(string* v){
    cout<<"Pass memory address = \t"<<v<<endl;
}

// example 3: arrays
void arrays(){
    // declare an array with five values
    int scores[5];

    //assigning/accessing individual cells in an array
    scores[0] = 60;
    scores[1] = 30;
    scores[2] = 75;
    scores[3] = 79;
    scores[4] = 98;
     cout<<"Array = \t"<<scores<<endl;
     cout<<"The third score is "<<scores[2]<<endl;

    // initializing values to an array
     int age_children[3] = {12,8,5};
     cout<<"The 1st age = "<<age_children[0]<<endl;

    // when an array is declared with initial, the size of the array can be omitted
     string names[] = {"Annie","Peter","Charles","Brian"};
     cout<<"The fourth name is "<<names[3]<<endl;
}

void sizeofarrays(){
    int age_children[] = {12,8,5};
    cout << "Size of age_children \t" << sizeof(age_children) / sizeof(age_children[0]) << endl;
}

// example 5: loop in an array - FIXED FUNCTION NAME
void looparrays(){
    string names[] = {"Annie", "Peter", "Carl", "Charles", "Brian"};
    int sizenames = sizeof(names) / sizeof(names[0]);
    int counter = 0;

    for(int i = 0; i < sizenames; i++){
        cout << names[i] << "\t";

        // count how many names has 5+ characters
        if (names[i].length() >= 5){
            counter++;
        }
    }

    cout << endl;
    cout << "There is/are " << counter << " names with 5+ characters!" << endl;
}
// Lab Exercise
void exercise(){
    // declare an array with 5 values
    int scores[5];  

    // assigning/accessing individual cells in an array
    scores[0] = 60;
    scores[1] = 90;
    scores[2] = 75;
    scores[3] = 88;
    scores[4] = 100;

    // set maximum score
    int maxScore = scores[0];

    // loop through the array to find the maximum score
    for(int i = 1; i < 5; i++) {
        if(scores[i] > maxScore) {
            maxScore = scores[i];
        }
    }

    // display the result
    cout << "The maximum score is " << maxScore << endl;
}