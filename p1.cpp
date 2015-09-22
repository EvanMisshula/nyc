#include <iostream>
#include <fstream>
#include <cstring>
#include <stdio.h>

using namespace std;

int main(void) {
    bool palindrome = true;
    char word[250];
    char answer = 'A';

    while (answer != 'A' || 'B') {
      cout <<"Would you like to play a game?"<< endl;
      cout << "Choose A or B"<< endl;
      cout << " A) Yes"<< endl;
      cout << " B) No"<< endl;
      cin >> answer;
      switch (answer) {
        case 'A':
        case 'a': {
          cout << "Enter a palindrome" << endl;
          cin >> word;
          int length = strlen(word);
          cout << "The word has " << length << " characters" << endl;
          int char_check = static_cast<int> (length/2);
          // divides the length of the world and checks it separately
          cout <<  "The semi-palidrome number is: "<< char_check << endl;
           if (length > 0) {
             for  ( int w = 0; w < char_check; w++ ) {
               cout << "Checking letter "
                    << (word[w]) << " with Letter "
                    << (word[length-1-w]) << endl;
               // Checks the letters with each other
                        if  (word[w] != word[length-1-w])
                          palindrome = false;
             }  // closes for
           }  // closes if
           if (palindrome == true) {
             cout << "Congrats The word is a palindrome" << endl;
             break;
           } else {
             cout << "Sorry, the word is not a palindrome" << endl;
             break;
           }
        }  // closes case A or a
        case 'B':
        case 'b': {
          cout << "Thank you, Have a nice day" <<endl;
          return 0;
        }
        default: {
          cout << "Sorry not vaild, try again, select  A or B "<< endl;
          cin >> answer;
          break;
        }
      }  // closes switch statement
    }  // closes while loop
    return 0;
}
