// example 2: This focuses on understanding input in c++
// Date: Tuesday 13th/January/2026


// This is necessary in c++ to make the 'cout' functions operational.
#include <iostream>
using namespace std;

// This is the main function that handles all the operations of this program; like an entry point
int main(){
    // initialize a variable to accept a word for input
    string word;
    // This displays a friendly message to prompt a user for an action. 
    cout << "Enter a word: ";

    // This prompts (Waits for user inputs); equivalent of the 'input' in some languages
    cin >> word;

    // Displays a message
    cout << "You word is " << word << endl;
    return 0;
}e
