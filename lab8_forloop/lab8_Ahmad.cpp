/*
Mamoor Ahmad 
Oct 8, 2025
File: lab8_Ahmad.cpp
*/
#include <iostream>
using namespace std;
int main() {
    cout<<"\n----Example1: for loop----\n"<<endl;
    //print Hello five times
   for(int actione=1; actione<=5; actione++){
        cout<<"Hello"<<actione<<endl;   
   }

    cout<<"\n----Example2: for loop as a decrement counter----\n"<<endl;
    //print from 9 to 1 
    int n = 9;
    for(n;n>=1;n--){
        cout<<n<<"\t";
    }
    cout<<endl;

    cout<<"\n----Example3: for loop asan increment counter with defferent step----\n"<<endl;
    //print from 1 to 20 in a step of 3 
    for(int m=1; m<=20;m+=3){
        cout<<m<<"\t"<<endl;
    }
    cout<<endl;

        cout<<"\n----Example 4: for loop with conditional statement----\n"<<endl;
        //print all numbers, between -10 and 10, that are multiples of 3
        for(int p = -10; p<=10; p++){
            if(p%3==0 && p!=0){
                cout<<p<<"\t";
            }
        }
        cout<<endl;

        cout<<"\n----Example 5: for loop with conditional statment ----\n"<<endl;
        // cout all even numbers between 5 and 20
        int eve_count = 0;
        for(int p = 5; p<=20; p++){
            if(p%2==0 && p!=0){
                cout<<p<<"\t";
                eve_count++;
            }
        }
        //print result 
        cout<<"There is/are "<<eve_count<<" even number/s"<<endl;
        
        cout<<"\n----Example 6: for loop with conditional statment----"<<endl;
        // add all negative numbers between -8 and 5 
        int sum_negative = 0;
        for(int x = -8; x <= 5; x++){
            if(x < 0){
                sum_negative += x;
            }
        }
        //print result 
        cout<<"The total sum of negative numbers = "<<sum_negative<<endl;

        cout<<"\n---EXERCISE1--"<<endl;
        int count_mult2 = 0;
        for(int i=21; i>=-21; i-=5){
            cout<<i<<"\t";
            if(i%2==0){
                count_mult2++;
            }
        }
        cout<<endl;
        //print result
        cout<<"The total count of numbers that are multiples of 2 = "<<count_mult2<<endl;

        cout<<"\n----EXERCISE2---"<<endl;
        int user_num;
        cin >> user_num;
        if(user_num > 30) {
            cout << "Starting value must be less than or equal to 30." << endl;
        } else {
            for(int i=user_num; i<=30; i+=4){
                cout<<i<<"\t";
            }
            cout<<endl;
        }
    return 0;
}
