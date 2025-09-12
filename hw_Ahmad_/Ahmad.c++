/*
Homework 1: strings, string methods, and numerical variables
Mamoor Ahmad
*/
#include<iostream>
#include<string>

using namespace std;

int main(){
    cout<<"\n------ Activity 1: strings and string methods ----- "<<endl;
    // step 1) string variables with initial values
    string greeting = "Welcome to ";
    string location = "New York City";
    
    // step 2) collect name from keyboard
    string user_name;
    cout<<"Enter your name: ";
    cin.ignore();
    getline(cin, user_name);
    
    // step 3) concatenate strings in order
    string full_message = greeting + location + " " + user_name;
    
    // step 4) display the concatenated string
    cout<<"Full message: "<<full_message<<endl;
    
    // step 5) find length of string
    int message_length = full_message.length();
    
    // step 6) find "ma" in the string
    int ma_position = full_message.find("ma");
    
    // step 7) replace "ma" with "%---%"
    string replaced_message = full_message;
    if(ma_position != string::npos){
        replaced_message.replace(ma_position, 2, "%---%");
    }
    
    // step 8) display results with tab alignment
    cout<<"\n------------------------------ RESULT ACTIVITY 1 ----------------------------"<<endl;
    cout<<"concatenated message:\t\t"<<full_message<<endl;
    cout<<"Message length:\t\t\t"<<message_length<<endl;
    cout<<"Index of character 'ma':\t"<<ma_position<<endl;
    cout<<"Replace 'ma' with %---%:\t"<<replaced_message<<endl;
    
    cout<<"\n------ Activity 2: numerical variables ----- "<<endl;
    // step 1) set pi as constant
    const float pi = 3.14159;
    
    // step 2) get radius and height from keyboard
    float radius, height;
    cout<<"Enter radius: ";
    cin>>radius;
    cout<<"Enter height: ";
    cin>>height;
    
    // step 3) check if radius > height
    bool radius_greater_height = radius > height;
    
    // step 4) check if radius == height
    bool radius_equal_height = radius == height;
    
    // step 5) modify values using assignment operators
    height *= 3;  // triple the height
    radius += 5;  // increase radius by 5
    
    // step 6) logical and comparison check
    bool condition_result = (radius != height) && (radius > height);
    
    // step 7) calculate volume of cylinder
    float cylinder_volume = pi * radius * radius * height;
    
    // step 8) display results with tab alignment
    cout<<"\n------------------------------ RESULT ACTIVITY 2 ----------------------------"<<endl;
    cout<<"Step 3) Is the radius greater than height?\t\t\t\t"<<radius_greater_height<<endl;
    cout<<"Step 4) Is the radius equal to height?\t\t\t\t\t"<<radius_equal_height<<endl;
    cout<<"Step 5) Triple height =\t\t\t\t\t\t\t"<<height<<"cm"<<endl;
    cout<<"Step 5) Increased radius by 5 =\t\t\t\t\t\t"<<radius<<"cm"<<endl;
    cout<<"Step 6) Is the radius not equal to and greater than height ?\t\t"<<condition_result<<endl;
    cout<<"Step 7) The volume of a right cylinder with radius "<<radius<<"cm and height "<<height<<"cm is = "<<cylinder_volume<<"cm^3"<<endl;

    return 0;
}