/*
Mamoor Ahmad
Sep 15,2025
lab6, nested conditional statment and switch
*/
#include<iostream>

using namespace std;

int main(){
    cout<<"\n------ Example 1: switch statement ----- "<<endl;
        
        int dayclasses;
        cout<<"select a day-iff: "<<endl;
        cout<<"1.for Monday"<<endl;
        cout<<"2.for Tuesday"<<endl;
        cout<<"3.for Wednesday"<<endl;
        cout<<"4.for Thursday"<<endl;
        cout<<"5.for Friday"<<endl;
        cin>>dayclasses;
        switch (dayclasses)
        {
        case 1:
            cout<<"You have et 725 and Et575  "<<endl;
            break;
        case 2:
            cout<<"You have MA121"<<endl;
            break;
        case 3:
            cout<<"You have ET575"<<endl;
            break;
        case 4:
            cout<<"You have MA119 and MA121 "<<endl;
            break;
        case 5:
            cout<<"You dont have class have fun working  "<<endl;
            break;
        }
    return 0;
}