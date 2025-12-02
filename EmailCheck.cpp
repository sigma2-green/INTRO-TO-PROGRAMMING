//A simple program using for each loop to check for email vaildation by checking the characters '@' and '.'
#include  <iostream>
using namespace std;

int main(){
    string email;
    //set boolean flags to false
    bool atSymbolFound = false;
    bool dotSymbolFound = false;
    
    cout << "Enter your email address: " ;
    cin >> email;

    for(char ch : email)
    {
          if (ch == '@') {
            atSymbolFound = true;
        }
        if (ch == '.') {
            dotSymbolFound = true;
        }
    }
    if(atSymbolFound && dotSymbolFound){
        cout << "The email address is valid." << endl;
    } else{
        cout << "The email address is invalid." << endl;
    }
    return 0;
}