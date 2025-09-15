/*
Mamoor Ahmad
lab5, control flow 
Sep10,2025
*/
#include<iostream>
#include<string>

using namespace std;

int main(){
    cout<<"\n------ Example 1: bool variable ----- "<<endl;
    // check if a number is positive
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    // step2) check if the number is positive
    bool checkpositive = n>0;
    // step 3) print the result 
    cout<<"Is "<<n<<" positive? "<<checkpositive<<endl;
    

    cout<<"\n------ Example 2: if statement ----- "<<endl;
    // change the checking_code to 999 if the number is positive 
    int checking_code = 111;
    if (n>0){
        checking_code = 999;
    }
    cout<<"checking_code = "<<checking_code<<endl;

    cout<<"\n------ Example 3: if-else statement ----- "<<endl;
    // check if a number is even or odd
    if (n%2==0){
        cout<<n<<" is even"<<endl;
    } else {
        cout<<n<<" is odd"<<endl;
    
    cout<<"\n------ Example 4: if-else statement ----- "<<endl;
    // absolute value 
    if(n>=0){
        cout<<n<<" is positive"<<endl;
    } 
    else {
        cout<<" is negative"<<-n<<endl;
        n*=-1;
        cout<<"The absolute value is "<<n<<endl;
    }

    cout<<"\n------ Example 5: multway statement ----- "<<endl;
    // select the colore according to a wavelength
    int wavelength = 0;
    string emitted_color="";
    cout<<"Enter a wavelength: ";
    cin>>wavelength;
    // multiway conditional statement
    if(wavelength<=379)
        emitted_color = "Ultraviolet";
    else if (wavelength>=380 && wavelength<=520)
        emitted_color = "Blue";
    else if (wavelength>=521 && wavelength<=590)
        emitted_color = "Green";
    else if (wavelength>=591 && wavelength<=740)
        emitted_color = "Red";
    else if (wavelength>=741)
        emitted_color = "infrared";
    else 
        emitted_color = "unable to read";

    //print result
    cout<<"The emitted color of wavelength"<<wavelength<<" is "<<emitted_color<<endl;
        

    cout<<"\n------ Exercise ----- "<<endl;
    // declare variables
    string gpa = "";
    float final_exam = 0;
    float labs = 0;
    float homework = 0;
    float grade = 0;

    //collect the values
    cout<<"Enter final exam grade (0-100): ";
    cin>>final_exam;
    cout<<"Enter labs grade (0-100): ";
    cin>>labs;
    cout<<"Enter homework grade (0-100): ";
    cin>>homework;

    // calculate grade using formula
    grade = final_exam * 0.5 + labs * 0.3 + homework * 0.2;

    // determine GPA based on grade
    if (grade >= 90 && grade <= 100)
        gpa = "A";
    else if (grade >= 80 && grade <= 89)
        gpa = "B";
    else if (grade >= 70 && grade <= 79)
        gpa = "C";
    else if (grade >= 60 && grade <= 69)
        gpa = "D";
    else if (grade < 60 && grade >= 0)
        gpa = "F";
    else
        gpa = "";

    // print result
    cout<<"A final grade of "<<grade<<" is equivalent to a GPA of "<<gpa<<endl;

    return 0;
    
}
