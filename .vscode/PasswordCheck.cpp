// Check password. if entered incorrectly more than 3 times, program exits.
#include <iostream>
#include <string>
//#include "Functions.h"


using namespace std;
// Function appearing before the main function does not need a prototype declaration

int main() {
    // Call  the login function
    string password;
    //prompt user for password
    cout << "Please enter your password to login: ";
    cin >> password;
    //Login(password);//Function call
    return 0;
    cout << "Sum is: " << add(5, 3) << endl;

}

// Function appearing after the main function MUST have a prototype declaration
int add(int a , int b){
    return a + b;
}