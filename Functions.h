#include <iostream>

using namespace std;

//Login function
int Login(string pass) 
{
    //Variable declarations
   const string correctPassword = "P123";
    string  UserPassword = pass;
    int attempts = 0;
    int maxAttempts = 3;
    while(attempts < 3) {
        cout << "Enter password: ";
        cin >> UserPassword;
        if (UserPassword == correctPassword) {
            cout << "Logged in.Access Granted." << endl;
            //Call a function to load the main menu or dashboard here
            return 0; // Exit program on successful login
        } else {
            attempts++;
            maxAttempts--;
            cout << "Incorrect password." << maxAttempts << " attempts left." << endl;
        }

    }
        cout << "Password blocked. Contact administrator." << endl;
        return 0; 

}
