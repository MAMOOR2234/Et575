
// Mamoor Ahmad
// Sep 15,2025
// lab11, introduction to function
#include<iostream>
using namespace std;
#include"lab11_function.cpp"

int main(){
    cout<<"\n ---- Example 1: void function ----"<<endl;
    printhello();
    printhello();
    printhello();

    cout<<"\n ---- Example 2: void function with arguments ----"<<endl;
    string username = "Anna";
    greeting("Peter");
    greeting(username);
    greeting("Carl");

    cout<<"\n ---- Example 3: function with returning value ----"<<endl;
    int savefive = returnfive();
    cout<< "The returning value is    \t "<<savefive<<endl;
    savefive += 2;
    cout<<"The returning value after += 2  \t"<<savefive<<endl;

    cout<<"\n ---- Example 4: code after the return ----"<<endl;
    printsome();
    int n = returnfive();
    cout<<"Some number \t "<<n<<endl;

    cout<<"\n ---- Example 5: calculate the area of square ----"<<endl;
    float area_square = areasquare(2.5);
    cout<<"The area of a square is   \t"<<area_square<<endl;

    cout<<"\n ---- Example 6: Product of two numbers ----"<<endl;
    int p = product(2,3);
    cout<<"The product is   \t"<<p<<endl;

    cout<<"\n ---- Example 7: Calculate the fahrenheit temperature ----"<<endl;
    cout<<"Temperature ----- "<<endl;
    double f = fah(12.5);
    printfah(f);

    cout<<"\n ---- Example 8: Check a number ----"<<endl;
    string checknum = checknumber(3);
    printnumber(checknum);

 cout<<"\n ---- Exercise: Check even number ----"<<endl;
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    bool result = isEven(num);
    printEvenResult(num, result);

    return 0;
}
