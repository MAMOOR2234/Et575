/*
Mamoor Ahmad
Homework 5 – Functions
Program 1: Wind chill calculation
*/
#include <iostream>
#include <cmath>
using namespace std;

// prototypes
int speed();
int temp();
double windspeed(int v, int tem);
void prompt_result(double value);


int speed(){
    int s;
    cout << "Enter wind speed (m/s, 1-99): ";
    cin >> s;
    while(s <= 0 || s >= 100){
        cout << "Invalid. Enter wind speed (1-99): ";
        cin >> s;
    }
    return s;
}

int temp(){
    int t;
    cout << "Enter temperature (C, <=10 and >-90): ";
    cin >> t;
    while(t > 10 || t <= -90){
        cout << "Invalid. Enter temperature (<=10 and >-90): ";
        cin >> t;
    }
    return t;
}

double windspeed(int v, int tem){
    return 33 - ((10*sqrt(v) - v + 10.5) * (33 - tem));
}

void prompt_result(double result){
    cout << "The wind index is: " << result << endl;
}

//  main for Program 1
int main(){
    int s = speed();
    float t = temp();
    prompt_result(windspeed(s,t));
    return 0;
}
/*
Program 2: Descending order entries
*/
#include <iostream>
#include <cmath>
using namespace std;


int collectNumber();
bool inOrder(int a, int b, int c);
void runProgram(int n1, int n2, int n3, bool desc);


int collectNumber(){
    int x;
    cout << "Enter a number: ";
    cin >> x;
    return x;
}

bool inOrder(int a, int b, int c){
    return (a > b && b > c);
}

void runProgram(int n1, int n2, int n3, bool desc){
    char again = 'y';
    while(again == 'y' || again == 'Y'){
        if(desc){
            cout << "Numbers are in descending order." << endl;
        } else {
            cout << "Numbers are NOT in descending order." << endl;
        }
        cout << "Run again? (y/n): ";
        cin >> again;
        if(again == 'y' || again == 'Y'){
            n1 = collectNumber();
            n2 = collectNumber();
            n3 = collectNumber();
            desc = inOrder(n1,n2,n3);
        }
    }
}

//  main for Program 2
int program2(){
    int num1 = collectNumber();
    int num2 = collectNumber();
    int num3 = collectNumber();
    bool desc_order = inOrder(num1,num2,num3);
    runProgram(num1,num2,num3,desc_order);
    return 0;
}