/**
 *  Mamoor Ahmad
 * Nov 24, 2025
 * Lab 19 - File and console input
 */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// example 1: console input failure
// function to check if num values is the proper data type
void checknumber(){
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if(cin.fail())
        {cout << "Erroe! input dismatched data type!" << endl;}
    else 
        {cout << "Entered number = " << num << endl;}

        //clear the cin state
    cin.clear();
    cin.ignore(1000, '\n');

    cout<<"End OF FUNCTION.Number ="<<num<<endl;


    
}

// example 2: console input to validate an input data type
float validatenumber(){
float n;
bool isNotValid = false;

do{
    cout<<"Enter a number: ";
    cin>>n;
    isNotValid = cin.fail();
    cin.clear();
    cin.ignore(1000,'\n');
    }while(isNotValid);

  return n;
}

// example 3: set object for input and output files 
ifstream fin;
ofstream fout;

void readfile(){
    fin.open("samplefile.txt");

    //variable 'line' is used to store each line samplefile.txt
    string line;
    int linecount = 1;

  //loop through each line in samplefile.txt
  while(getline(fin,line)){
        cout<<"Line"<<linecount<<"\t"<<line<<endl;
        linecount++;
    }

    //close file
    fin.close();  
}
//example 4: write a file
//fout will write in a new or existing file. fout overwrites all the contentof an existing file.
void writefile(string filename){
    ofstream fout;
    fout.open(filename);

    // write some content 
    for(int n=1; n<=3; n++){
        fout<<"Good Morning "<<n<<endl;
    }
    //close file
    fout.close();
}

// example 5: append data into a file
void appendfile(string filename){
    fout.open(filename, ios::app); 

    // append some content 
    for(int n=3; n>=0; n--){
        fout<<"GAME OVER! "<<n<<endl;
    }
    //close file
    fout.close();
}
// EXERCISE 
// Function to create a file and write the initial line
void createFile() {
    ofstream fout;
    fout.open("data_user.txt");
    fout << "This is my output file – Mamoor Ahmad.\n"; 
    fout.close();
}

// Function to append a message to the file
void appendToFile(string message) {
    ofstream fout;
    fout.open("data_user.txt", ios::app); // open in append mode
    fout << message << endl;
    fout.close();
}

// Function to read a file
void readFile(string filename) {
    ifstream fin;
    fin.open(filename);
    string line;
    if (fin.is_open()) {
        while (getline(fin, line)) {
            cout << line << endl;
        }
        fin.close();
    } else {
        cout << "Unable to open file: " << filename << endl;
    }
}