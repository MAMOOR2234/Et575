// claude answer 
#include <iostream>
#include <string>
using namespace std;

// CLASS EXAMPLES: String Methods Demonstration
void classExamples() {
    cout << "=== CLASS EXAMPLES: STRING METHODS ===" << endl << endl;
    
    // Example 1: String declaration and input
    cout << "1. String Declaration and Input:" << endl;
    string greeting = "Hello World";
    cout << "   String: " << greeting << endl;
    cout << "   Length: " << greeting.length() << endl << endl;
    
    // Example 2: Character access
    cout << "2. Character Access:" << endl;
    cout << "   First character: " << greeting[0] << endl;
    cout << "   Third character: " << greeting.at(2) << endl << endl;
    
    // Example 3: Substring operations
    cout << "3. Substring Operations:" << endl;
    string part = greeting.substr(0, 5); // Extract "Hello"
    cout << "   Substring (0, 5): " << part << endl;
    cout << "   Substring (6, 5): " << greeting.substr(6, 5) << endl << endl;
    
    // Example 4: String replacement
    cout << "4. String Replacement:" << endl;
    string original = "Programming";
    string modified = original;
    modified.replace(0, 4, "Code"); // Replace "Prog" with "Code"
    cout << "   Original: " << original << endl;
    cout << "   Modified: " << modified << endl << endl;
    
    // Example 5: String concatenation
    cout << "5. String Concatenation:" << endl;
    string first = "C++";
    string second = " Programming";
    string combined = first + second;
    cout << "   Combined: " << combined << endl << endl;
    
    // Example 6: Find and erase operations
    cout << "6. Find and Erase Operations:" << endl;
    string sample = "Hello Programming World";
    size_t pos = sample.find("Programming");
    cout << "   Original: " << sample << endl;
    cout << "   Found 'Programming' at position: " << pos << endl;
    sample.erase(sample.length() - 6, 6); // Remove last 6 characters
    cout << "   After removing last 6 chars: " << sample << endl << endl;
    
    cout << "=== END OF CLASS EXAMPLES ===" << endl << endl;
}

// LAB EXERCISE: Main program
void labExercise() {
    cout << "=== LAB EXERCISE ===" << endl << endl;
    
    string word;
    
    // Ask user to input a word
    cout << "Please type a word from the keyboard: ";
    cin >> word;
    cout << endl;
    
    // Print the 2nd character of the word
    char secondChar = ' ';
    if (word.length() >= 2) {
        secondChar = word[1]; // Index 1 is the 2nd character
    }
    cout << "2nd character:          " << secondChar << endl;
    
    // Find and print the length of the word
    int wordLength = word.length();
    cout << "word has:               " << wordLength << " characters" << endl;
    
    // Replace 2 characters from the 3rd character with "-- $ --"
    string replaceWord = word;
    if (word.length() >= 4) { // Need at least 4 characters to replace 2 from position 3
        replaceWord.replace(2, 2, "-- $ --"); // Start at index 2 (3rd char), replace 2 chars
    } else if (word.length() >= 3) { // If only 3 characters, replace 1 from position 3
        replaceWord.replace(2, 1, "-- $ --");
    }
    cout << "Replace word:           " << replaceWord << endl;
    
    // Remove 3 characters from the end of the message
    string removeEndWord = replaceWord; // Use the replaced word as input
    if (replaceWord.length() >= 3) {
        removeEndWord.erase(replaceWord.length() - 3, 3); // Remove last 3 characters
    } else {
        removeEndWord = ""; // If less than 3 characters, result is empty
    }
    cout << "Remove end characters:  " << removeEndWord << endl << endl;
}

int main() {
    // Display class examples first
    classExamples();
    
    // Execute lab exercise
    labExercise();
    
    cout << "Program completed successfully!" << endl;
    
    return 0;
}

/// Chatgbt answer 

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Type a word: ";
    cin >> word;

    // Print the 2nd character
    cout << "2nd character:          " << word[1] << endl;

    // Print length of the word
    cout << "word has:               " << word.length() << " characters" << endl;

    // Replace 2 characters from the 3rd character with "-- $ --"
    string replacedWord = word;
    if (replacedWord.length() >= 3) {
        replacedWord.replace(2, 2, "-- $ --");
    }
    cout << "Replace word:           " << replacedWord << endl;

    // Remove 3 characters from the end
    string removedWord = word;
    if (removedWord.length() > 3) {
        removedWord.erase(removedWord.length() - 3);
    }
    cout << "Remove end characters:  " << removedWord << endl;

    return 0;
}

/////////////

//--- AI Assistant Used: ChatGPT ---
// Was the code correct? (Yes)
// Was it readable and properly commented?
 // Yes
// Were you able to explain each line of code?
  /// not really 
// Did it use the same programming concepts we learned in class?
  /// NO 
// Terminal Output:Type a word: computer
//2nd character:          o
//word has:               8 characters
//Replace word:           co-- $ --uter
//Remove end characters:  compu

