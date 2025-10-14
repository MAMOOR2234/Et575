/*
Author: Mamoor Ahmad
Date: Oct 14, 2025
Lab: lab9, while and do-while loop
*/
#include<iostream>
using namespace std;

int main(){

    cout<<"\n----Example1: while loop as a counter----\n"<<endl;
    //print from 1 to 5 
    int n = 1;
    while(n<=5){
        cout<<n<<endl;
        n++;
    }
    cout<<endl;
    cout<<"\n----Example2: while loop as a counter----\n"<<endl;
    //print from 3 to 0 
    int m=3;
    while(m>=0){
        cout<<m<<"\t";
        m--;
    }
    cout<<endl;
    cout<<"\n----Example3: while loop as a decrement counter----\n"<<endl;
    m = 3;
    while(m >= 0){
        cout<<m<<"\t";
        m--;
    }
    cout<<endl;
    cout<<"\n----Example4: while loop as a decrement counter----\n"<<endl;
    m = 3;
    while(m >= 0){
        cout<<m<<"\t";
        m--;
    }
    cout<<endl;
    cout<<"\n----Example5: while loop to validate a number----\n"<<endl;
    int num;
    cout<<"Enter a number between 10 and 20 inclusive:";
    cin>>num;
     // if the number is not between 10 and 20 inclusive, use a while loop to recollect the number
    while(!(num>=10 && num<=20)){
        cout<<"Invalid input. Please enter a number between 10 and 20 inclusive: ";
        cin>>num;
    }
    cout<<"\n----Example6: do-while loop to validate a number----\n"<<endl;
    // do not redeclare int num; reuse the same variable
    do{
        cout<<"Enter a number between 10 and 20 inclusive";
        cin>>num;
    } while(!(num>=10 && num<=20));
    cout<<"End of do-while loop. Entered number = "<<num<<endl;  

    cout<<"\n----Example7: do-while loop to validate a number----\n"<<endl;
    // do-while to run the program again 
    // program check if a number is positive, negative, or zero
    int number;
    char choice = 'y';
    do{
        cout<<"Enter a number: ";
        cin>>number;
        if(number == 0){
            cout<<"The number is zero."<<endl;
        } else if(number > 0){
            cout<<"The number is positive."<<endl;
        } else {
            cout<<"The number is negative."<<endl;
        }
        cout<<"Do you want to check another number?  ";
        cin>>choice;
    }
     while(choice == 'y' || choice == 'Y');
    cout<<"\n ---example8: do-while loop set to true----\n"<<endl;
    n = 0;
    int sum_positive = 0;
    do{
        cout<<"Enter a positive number: ";
        cin>>n;
        if(n >= 0){
            sum_positive += n;
        }
        else{
            break;
        }
    }
    while(true);

    cout<<"The total sum is = "<<sum_positive<<endl;

    cout<<"\n--- Example 9: withdraw money from bank account ----\n"<<endl;
    int balance = 1000;
    int w = 0;
    
    while(true){
        cout<<"How much do you want to withdraw? ";
        cin>>w;
        if(w > balance){
            cout<<"can't withdraw "<<w<<". Enter another amount."<<endl;
        } 
        else {
            balance -= w;
            cout<<" withdrew $ "<<w<<". The new balance is $ "<<balance<<endl;
            break;
        }

    }
    cout<<"Thank you for banking with us!"<<endl;

    cout<<"\n--- Example 10: continue statement ----\n"<<endl;
    // while loop to print,from 0 to 10, and add all the number except 5
    int sum_all = 0;
    int x = 0;
    while(x++ < 10){
        cout<<x<<"\t";
        if(x==5){
            continue;
        }
        sum_all += x;
    }
    cout<<"The total sum of numbers = "<<sum_all<<endl;


 cout<<"\n--- Lab Exercise: Sum of digits until user enters 0 ----\n"<<endl;

    int input = 0;
    do{
        cout<<"Enter an integer (0 to stop): ";
        cin>>input;

        if(input == 0){
            break; // stop program
        }

        // calculate sum of digits
        int temp = input;
        int digit_sum = 0;
        while(temp != 0){
            digit_sum += temp % 10;
            temp /= 10;
        }

        cout<<"The sum of digits of "<<input<<" is = "<<digit_sum<<endl;

    } while(input != 0);

    cout<<"The total sum is 0 (program stopped by user)."<<endl;

    return 0;
}