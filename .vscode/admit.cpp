#include <iostream>
using namespace std;

int main(){
    int age;
    string interest;
    cout << "Please Enter your age: ";
    cin >> age;
//Example of nested if statements
    if (age>=4 && age <=10)// Chheck if age is between 4 and 10
    {
        cout << "Enter the child's interest: ";
        cin >> interest;
        if(interest == "Soccer" || interest == "soccer" || interest == "SOCCER"){
            cout << "Admitted to school" <<endl;
            cout << "Assigned to Soccer Playgroup" <<endl;
            return 0;
        }
        if(interest == "Art" || interest == "art" || interest == "ART"){
            cout << "Admitted to school" <<endl;
            cout << "Assigned to Art Playgroup" <<endl;
            return 0;
        }
        else{
            cout << "Admitted to school" <<endl;
            cout << "Assigned to Other Playgroup" <<endl;
            return 0;
        }
    }
    else
    {
        cout << "Declined: Not admitted to school." << endl;
    }

    //More actions/structure/statements can be added here
    return 0;
    }


    
