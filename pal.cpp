 //

//  Created by Shantoi Shaw on 9/10/15.

//  Copyright (c) 2015 Shantoi Shaw. All rights reserved.

//

#include <iostream>
#include <fstream>
#include <cstring>
#include <stdio.h>

using namespace std;


int main(void){

    bool palindrome= true;
    char word[250];
    char answer;

    cout<<"Would you like to play a game?"<<endl;
    cout<< "Choose A or B"<<endl;
    cout<< " A) Yes"<<endl;
    cout<< " B) No"<<endl;
    cin>> answer;
 do

    {

        cout<< "Sorry not vaild, try again, select  A or B "<<endl;
        cin>> answer;
        switch (answer)
        {

            case 'A':
            case 'a':
            {
                cout << "Enter a palidrome" << endl;
                cin>>word;
                int length = strlen(word);
                cout << "The word has " << length << " characters" << endl;
                int char_check = int(length/2);// divides the length of the world and checks it separately
                cout <<  "The semi-palidrome number is: "<<char_check << endl;
                if (length>0)
                {
                    for(int w=0 ; w < (char_check); w++)
                    {

                      cout << "Checking letter " << (word[w]) << " with Letter " << (word[length-1-w])<< endl;//Checks the letters with each other
                        if(word[w]!=word[length-1-w])
                            palindrome=false;
                    }
                }
                if (palindrome==true)
                {
                  cout << "Congrats! The word is a palindrome" << endl; break;            }
                else
                {
                  cout << "Sorry, the word is not a palindrome" << endl; break;            }
            }
            case 'B':
            case 'b':
                cout<< "Thank you, Have a nice day"<<endl; break;
        }
    } while(answer != 'A' || 'B');
}

//  //  Copyright (c) 2015 Shantoi Shaw. All rights reserved.

// //

// #include <iostream>
// #include <fstream>
// #include <cstring>
// #include <stdio.h>

// //using std::cout;
// //using std::endl;

// using namespace std;

// int main(void) {
//   bool palindrome = true;
//   char word[250];
//   char answer;
//   int char_check;

//   cout << "Would you like to play a game?" << endl;

//       return 0;
// }


    // std::cout << "Choose A or B" << std::endl;
    // std::cout << " A) Yes" <<std::endl;
    // std::cout << " B) No" <<std::endl;

    // std::cin >> answer;

  // do {
  //   std::cout << "Sorry not vaild, try again, select  A or B "<< std::endl;
  //   std::cin >> answer;
  //   switch (answer) {
  //           case 'A':
  //           case 'a':  {
  //               std::cout << "Enter a palidrome" << std::endl;
  //               std::cin >> word;
  //               int length = strlen(word);
  //               std::cout << "The word has " << length << " characters" << std::endl;
  //               int char_check = static_cast<int> (length / 2);
  //               // divides the length of the world and checks it separately
  //               std::cout << "The semi-palidrome number is: " << char_check << std::endl;
  //               if (length > 0) {
  //                   for (int w = 0 ; w < (char_check); w++) {
  //                       std::cout << "Checking letter " << (word[w])
  //                            << " with Letter "
  //                            << (word[length-1-w])
  //                            << std::endl;  // Checks the letters with each other
  //                       if ( word[w] != word[length-1-w])
  //                           palindrome = false;
  //                   }
  //               }
  //               if (palindrome == true) {
  //                   std::cout << "Congrats! The word is a palindrome"
  //                        << std::endl; break;
  //               } else {
  //                   std::cout << "Sorry, the word is not a palindrome" << std::endl;
  //                   break;}
  //           }

  //           case 'B':
  //           case 'b':

  //               std::cout << "Thank you, Have a nice day" << std::endl;
  //               break;
  //       }
    // } while (answer != 'A' || 'B');

