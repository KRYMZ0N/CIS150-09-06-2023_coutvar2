//==============================
// Author: Jack Grimes
// Date: 09-06-2023
// Desc: Cout Var/chap2
//==============================

#include <iostream>

using namespace std;
int main()
{
    cout << "J\na\nc\nk" << endl; //Printing name on new lines

    int favNum = 10; //Definition and an assignment

    int age; // Definition
    age = 18; // assginment

    cout << "Hello my name is Jack! I am " << age << " years old, and my favorite number is " << favNum << endl; //printing integer vars

    int userAge;
    int birthYear;

    cout << "Enter your age!: ";

    cin >> userAge; // Input

    cout << "Hello. You are " << userAge << " years old." << endl; //Printing out the age to the user.

    birthYear = 2023 - userAge; // just using math to calculate the users Birth Year.

    cout << "You were born in " << birthYear; // Telling them
    return 0;
}
