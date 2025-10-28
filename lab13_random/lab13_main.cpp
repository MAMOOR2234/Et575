// Mamoor Ahmad
// Sep 15,2025
// lab13, random variables 
#include<iostream>
#include"lab13_function.cpp"
using namespace std;
int main(){
    cout<<"\n ---- Example 1:  random number  ----"<<endl;
    int r = random_number();
    cout<<"Random Number = "<<endl;

    cout<<"\n ---- Example 2: different random number----"<<endl;
    int diff_random = different_random();
    cout<<"Different Random Number: "<<diff_random<<endl;

    cout<<"\n ---- Example 3:random number between 0 and 9 ----"<<endl;
    int r_0_9 = random_0_9();
    cout<<"Number between 0 and 9: "<<r_0_9<<endl;

    cout<<"\n ---- Example 4: random number between -10 and 5 ----"<<endl;
    cout<<"Number between -10 and 5 \t "<<random_neg10_5()<<endl;

    cout<<"\n ---- EXERCISE----"<<endl;
    int run1 = random_1_6(); // call function to generate a number between 1 and 6
    int run2 = random_1_6();
    cout<<"Run1 = "<<run1<<"\t Run2 = "<<run2<<endl;
   
    // call funtion to check for snake_eyes
    bool result = compare_ones(run1, run2);
    
    
    
    // call function to print result
    printresult(compare_ones(run1, run2));  

    return 0;
}
 