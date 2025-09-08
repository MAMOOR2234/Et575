/*
Mamoor Ahmad
lab4, string and string methods
Sep 8, 2025
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
    cout<<"\n=== EXAMPLES 1: string indexing ===" << endl;
    string first_name = "Mamoor";
    cout<<"The 3rd character = "<<first_name[2]<<endl;
    cout<<"The 1st character = "<<first_name[0]<<endl;

    cout<<"\n=== EXAMPLES 2: amount of character in a string ===" << endl;
    int characters = first_name.length();
    cout<<"There are "<<characters<<" characters in "<<first_name<<endl;

    cout<<"\n=== EXAMPLES 3: concatenate character/s in a string ===" << endl;
    string last_name = "Ahmad";
    string username ="PP123";
    cout<<"concatenated words = "<< first_name  + last_name + username <<endl;

    cout<<"\n=== EXAMPLES 4: substracting characters in a string ===" << endl;
    string msg = "Today is a beautiful day!";
    // extract 5 character from the 3rd character
    string subst_char = msg.substr(2,5);
    cout<<"Extracted characters are: "<<subst_char<<endl;

    cout<<"\n=== EXAMPLES 5: inserting characters in a string ===" << endl;
    // insert the word "maybe"
    msg.insert(5," maybe");
    cout<<"After inserting method: "<<msg<<endl;

    cout<<"\n=== EXAMPLES 6: appending characters to the end of the string ===" << endl;
    msg.append(" -- by Prof.Wu");
    cout<<"After append method = "<<msg<<endl;

    cout<<"\n=== Example 7: replacing characters in a string ===" <<endl;
    msg.replace(11,9,"bad");
    cout<<"After replace method = "<<msg<<endl;

    cout<<"\n=== Example 8: erasing character from string ===" <<endl;
    // erase the word 'Today'
    msg.erase(0,5);
    cout<<"After erase method = "<<msg<<endl;

    cout<<"\n=== Example 9: finding character in a string ===" <<endl;
    int index_prof = msg.find("Prof");
    cout<<"The index of Prof = "<<index_prof<<endl;

    cout<<"\n===== EXERCISE ====="<<endl;
    string word;
    cout<<"Enter a word: ";
    cin >> word;

    cout<<"\n ===== EXERCISE ===="<<msg<<end1;
    string word ="";
    cout<<"Enter a word:"

    // Print the 2nd character of the word
    cout<<"2nd character: "<<word[1]<<endl;
    
    // Find and print the length of the word
    cout<<"word has: "<<word.length()<<" characters"<<endl;
    
    // Replace 2 characters from the 3rd character with "-- $ --"
    string replace_word = word;
    replace_word.replace(2, 2, "-- $ --");
    cout<<"Replace word: "<<replace_word<<endl;
    
    // Remove 3 characters from the end of the message
    string remove_end = word;
    remove_end.erase(remove_end.length()-3, 3);
    cout<<"Remove end characters: "<<remove_end<<endl;
    return 0;
}