//Smple do while loop program to print numbers from 12 to 50 
#include <iostream>
using namespace std;
int main(){
    //int num =  12,  sum = 0;

    int num;
    int sum = 0;

    cout << "Enter a number: " << endl;
    cin >> num;
    do{
        //cout << num << ",";
        sum += num;
        //num += 2; // Loop termination statement
    } while(num != 0);
    cout <<  "\b" << " "; // To remove the last comma
    //cout << "\nSum of even numbers from 12 to 50 is: " << sum << endl;  
    cout << " Cannot add from zero!" << sum << endl;
    return 0;
}