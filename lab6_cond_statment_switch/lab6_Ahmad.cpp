// Mamoor Ahmad
// Sep 15,2025
// lab6, nested conditional statement and switch
#include<iostream>

using namespace std;

int main(){
    cout<<"\n------ Example 1: nested conditional statement ----- "<<endl;
    // Prompting the user to input a number for flexibility
    int n = -8;
if(n>0){
    if(n%2==0){
        cout<<"The number is positive and Even"<<endl;
    }
    else {
        cout<<"The number is positive and Odd"<<endl;
    }
}
else if(n<0) {
     if(n%2==0){
         cout<<"The number is negative and Even"<<endl;
     } else {
         cout<<"The number is negative and Odd"<<endl;
     }
}
else {
        cout << "The number is zero" << endl;
}
      cout<<"\n------ Example 1: organize three number in decreasing order ----- "<<endl;
      // declare the identifiers (variable name)
      int num1, num2 = 0, num3 = 0;

      //display a message and collect the three number
      cout<<"Enter three numbers: ";
      cin>>num1>>num2>>num3;

      // check if num1 is greater then num2 and num3
      if(num1>num2 && num1>num3){
        if(num2>num3)
            cout<<num1<<"\t"<<num2<<"\t"<<num3<<endl;
        else
            cout<<num1<<"\t"<<num3<<"\t"<<num2<<endl;
      
      }
      //check if num2 is the greatest 
      else if (num2>num1 && num2>num3){
        if (num1>num3)
            cout<<num2<<"\t"<<num1<<"\t"<<num3<<endl;
        else
            cout<<num2<<"\t"<<num3<<"\t"<<num1<<endl;
        
      }
      // check if num3 is the greatest 
      else if(num3>num2 && num3>num1){
        if(num1>num2)
            cout<<num3<<"\t"<<num1<<"\t"<<num2<<endl;
        else
            cout<<num3<<"\t"<<num2<<"\t"<<num1<<endl;
      }
      else{
        cout<<"All three number are the same!"<<endl;
      }
        cout<<"\n------ Example 3: switch statement ----- "<<endl;
        // select a day-off using swich-case statement 
        int dayoff;
        cout<<"select a day-iff: "<<endl;
        cout<<"1.for Monday"<<endl;
        cout<<"2.for Tuesday"<<endl;
        cout<<"3.for Wednesday"<<endl;
        cout<<"4.for Thursday"<<endl;
        cout<<"5.for Friday"<<endl;
        cin>>dayoff;

        switch (dayoff)
        {
        case 1:
            cout<<"You are off Monday "<<endl;
            break;
        case 2:
            cout<<"You are off Tuesday "<<endl;
            break;
        case 3:
            cout<<"You are off Wednesday "<<endl;
            break;
        case 4:
            cout<<"You are off Thursday "<<endl;
            break;
        case 5: 
            cout<<"You are off Friday "<<endl;
            break;
        default:
            cout<<"unable to read the day-off."<<endl;
            break;
        }

    cout<<"\n------ Example 4: switch to select a gender ----- "<<endl;
        char gender=' ';
        cout<<"Select a gender: "<<endl;
        cout<<"m of M for male"<<endl;
        cout<<"f or F for female"<<endl;
        cout<<"o or O for other"<<endl;
        cin>>gender;

        switch (gender)
        {
        case 'm': case 'M':
        cout<<"Gender = Male"<<endl;
        break;
        case 'f': case 'F':
        cout<<"Gender = Female"<<endl;
        break;
        case 'o': case 'O':
        cout<<"Gender = Other"<<endl;
        break;
        default:
            cout<<"Gender = UNDEFINED"<<endl;
            break;
        }
      
    cout<<"\n------ Exercise 1: House Affordability Calculator ----- "<<endl;
    double savings;
    cout<<"Enter the amount of money in your savings: $";
    cin>>savings;
    
    if(savings < 0){
        cout<<"Have some savings!"<<endl;
    }
    else if(savings > 0 && savings < 199999){
        cout<<"Keep saving!"<<endl;
    }
    else if(savings >= 200000 && savings <= 500000){
        cout<<"With $"<<savings<<" you can afford an apartment or co-op";
        
        if(savings >= 200000 && savings <= 300000){
            cout<<" - Studio"<<endl;
        }
        else if(savings >= 300001 && savings <= 400000){
            cout<<" with 1 bedroom and 1 bathroom"<<endl;
        }
        else if(savings >= 400001 && savings <= 500000){
            cout<<" with 2 bedrooms and 1 bathroom"<<endl;
        }
    }
    else if(savings >= 500001 && savings <= 1000000){
        cout<<"With $"<<savings<<" you can afford a house";
        
        if(savings >= 500001 && savings <= 700000){
            cout<<" with 2 bedrooms and 2 bathrooms"<<endl;
        }
        else if(savings >= 700001 && savings <= 1000000){
            cout<<" with 3 bedrooms and 3 bathrooms"<<endl;
        }
    }
    else if(savings >= 1000001){
        cout<<"With $"<<savings<<" you can afford a mansion"<<endl;
    }


    cout<<"\n------ Exercise 2: Number Doubler ----- "<<endl;
    int number;
    char choice;
    
    cout<<"Enter a number: ";
    cin>>number;
    
    cout<<"Do you want to double this number? (Y/y for yes, N/n for no): ";
    cin>>choice;
    
    switch(choice){
        case 'Y': case 'y':
            number = number * 2;
            break;
        case 'N': case 'n':
            break;
        default:
            number = 0;
            break;
    }
    
    cout<<"The number is set to "<<number<<endl;
    return 0;
}