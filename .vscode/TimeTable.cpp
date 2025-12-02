#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Enter a day number (1 for Monday, 2 for Tuesday,..., 7 for Sunday): ";
    cin >> day;
    switch(day){
        case 1:
            cout << "You have the following units on Monday:\n";
            cout << "8:15 am - 11:15 am - BBIT 1106: Math for Business \n 12:15pm - 2:15pm - BBIT 1102: Introduction to Programming \n";
            break;

        case 2:
            cout << "You have the following units on Tuesday:\n";
            cout << "8:15 am - 11:15 am Intro to programming \n 12:15pm - 2:15pm - BBIT 1104 : Intro to Ethics \n";
            break;

        case 3:
            cout << "You have the following units on Wednesday:\n";     
            cout << "8:15 am - 11:15 am - BBIT 1108: Business Communication \n 12:15pm - 2:15pm - BBIT 1106: Math for Business \n";
            break;
        case 4:
            cout << "You have the following units on Thursday:\n";
            cout << "8:15 am - 11:15 am - BBIT 1104: Intro to Ethics \n 12:15pm - 2:15pm - BBIT 1108: Business Communication \n";
            break;
        case 5:
            cout << "You have the following units on Friday:\n";
            cout << "8:15 am - 11:15 am - BBIT 1103: BBIT 1103: Business Computing \n 12:15pm - 2:15pm - BBIT 1103: Principles of Accounting \n";
            break;
        default:
            cout << "No classes scheduled for this day. Please enter a valid day number (1-5).\n";
            break;  
        }

}