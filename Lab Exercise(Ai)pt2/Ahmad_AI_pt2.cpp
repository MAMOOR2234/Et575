/* Lab Exercise (Part 2): Temperature Converter
   Mamoor Ahmad
   File: Lab_AI_part2_Ahmad.cpp
*/
#include <iostream>
using namespace std;
double celsiusToFahrenheit(double celsius) {
    return (1.8 * celsius) + 32.0;
}

int main() {
    cout << "Lab Part 2: build started.\n";
    cout << "Lab Part 2: temperature conversion" << endl;
    double celsius = 20.0;
    double fahrenheit = celsiusToFahrenheit(celsius);
    cout << "Test C--F with 20: " << fahrenheit << endl;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    fahrenheit = celsiusToFahrenheit(celsius);
    cout << celsius << "C is " << fahrenheit << "F\n";

    // Test Fahrenheit to Celsius
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    double celsiusFromF = fahrenheittoCelsius(fahrenheit);
    cout << fahrenheit << "F is " << celsiusFromF << "C\n";

    return 0;
}

double fahrenheittoCelsius(double f) {
    return (5.0/9.0) * (f - 32.0);
}
int main() {
    cout << "------Temperature Converter------" << endl;
    cout<< "Choose conversion type:\n"<<endl;
    cout<< "1. Celsius to Fahrenheit\n"<<endl;
    cout<< "2. Fahrenheit to Celsius\n"<<endl;
    cout<< "Enter your choice (1 or 2): ";
    int choice;
    cin >> choice;
    switch (choice){
        case 1: {
            double c;
            cout << "Enter temperature in Celsius: ";
            cin >> c;
            double fahrenheit = celsiusToFahrenheit(c);
            cout << c << "C is " << fahrenheit << "F\n";
            break;
        }
        case 2: {
            double f;
            cout << "Enter temperature in Fahrenheit: ";
            cin >> f;
            double celsius = fahrenheittoCelsius(f);
            cout << f << "F is " << celsius << "C\n";
            break;
        }
        default:
            cout << "Invalid choice. Please select 1 or 2." << endl;
    }
}