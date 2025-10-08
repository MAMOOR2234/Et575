// claude answer 
#include <iostream>
#include <string>
using namespace std;


int main() {
    // Activity 1: String manipulation
    cout << "ACTIVITY 1: STRING MANIPULATION" << endl;
    cout << "=================================" << endl;
   
    // Step 1: Initialize string variables
    string welcome = "Welcome to ";
    string city = "New York City";
   
    // Step 2: Collect name from keyboard
    string name;
    cout << "Please enter your name: ";
    getline(cin, name);
   
    // Step 3: Concatenate strings
    string concatenated = welcome + city + " " + name;
   
    // Step 4: Display concatenated string
    cout << "Concatenated message: " << concatenated << endl;
   
    // Step 5: Find length of the string
    int messageLength = concatenated.length();
   
    // Step 6: Find index of "ma"
    int indexMa = concatenated.find("ma");
   
    // Step 7: Replace "ma" with "%---%"
    string replacedString = concatenated;
    if (indexMa != string::npos) {
        replacedString.replace(indexMa, 2, "%---%");
    }
   
    // Display results for Activity 1
    cout << "\n------------------------------ RESULT ACTIVITY 1 ----------------------------" << endl;
    cout << "concatenated message:\t" << concatenated << endl;
    cout << "Message length:\t\t" << messageLength << endl;
    cout << "Index of character 'ma':\t" << indexMa << endl;
    cout << "Replace 'ma' with %---%:\t" << replacedString << endl;
   
    // Activity 2: Numerical calculations
    cout << "\n\nACTIVITY 2: NUMERICAL CALCULATIONS" << endl;
    cout << "====================================" << endl;
   
    // Step 1: Set constant pi
    const float PI = 3.14159;
   
    // Step 2: Collect radius and height from keyboard
    float radius, height;
    cout << "Please enter the radius: ";
    cin >> radius;
    cout << "Please enter the height: ";
    cin >> height;
   
    // Store original values for display
    float originalRadius = radius;
    float originalHeight = height;
   
    // Step 3: Check if radius is greater than height
    bool radiusGreater = (radius > height);
   
    // Step 4: Check if radius is equal to height
    bool radiusEqual = (radius == height);
   
    // Step 5: Triple the height and increase radius by 5
    height *= 3;  // Triple the height
    radius += 5;  // Increase radius by 5
   
    // Step 6: Check if radius is not equal to height AND greater than height
    bool condition = (radius != height) && (radius > height);
   
    // Step 7: Calculate volume of the right cylinder
    float volume = PI * pow(radius, 2) * height;
   
    // Display results for Activity 2
    cout << "\n------------------------------ RESULT ACTIVITY 2 ----------------------------" << endl;
    cout << "Step 3) Is the radius greater than height?\t\t\t" << radiusGreater << endl;
    cout << "Step 4) Is the radius equal to height?\t\t\t\t" << radiusEqual << endl;
    cout << fixed << setprecision(1);
    cout << "Step 5) Triple height =\t\t\t\t\t" << height << "cm" << endl;
    cout << "Step 5) Increased radius by 5 =\t\t\t\t" << radius << "cm" << endl;
    cout << "Step 6) Is the radius not equal to and greater than height?\t" << condition << endl;
    cout << fixed << setprecision(1);
    cout << "Step 7) The volume of a right cylinder with radius " << radius << "cm and height " << height << "cm is = " << volume << "cm^3" << endl;
   
    return 0;
}
	
