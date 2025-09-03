/*
lab 2, operators
sep 2, operators
sap 3, 2025
*/
#include<iostream>

using namespace std;

int main (){
    cout<<"\n-----example 1: arithmetic operator ------"<<endl;
    // calculate the height of a free falling object
   //free_fall = 0.5 * gravity * time * time; // Calculate free fall height
   //declare the contant variable name 'gravity'
   const float Gravity = 9.8;
   // declare variable height and time 
   float height=0 , time=0;
   // COLLECT THE FALLING TIME
   cout<<"ENTER A FALLING TIME ";
   cin>>time;
    // calculate the height of a free fall object 
    height = 0.5 * Gravity * time * time;
    //PRINT RESULTS 
    cout<<"THE HEIGHT OF THE FREE fall object at "<<time<<" seconds is "<<height<<endl;


    return 0;
}