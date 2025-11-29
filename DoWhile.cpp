//Smple do while loop program to print numbers from 12 to 50 and their sum
#include <iostream>
using namespace std;
int main(){
    //int num =  12,  sum = 0;

    int num;
    int sum = 0;

    cout << "Enter a number: " << endl;
    cin >> num;
    do{
        cout << num << ",";
        sum += num;
        num += 2; // Loop termination statement
    } while(num <= 50);
    cout <<  "\b" << " "; // To remove the last comma
    cout << "\nSum of even numbers from 12 to 50 is: " << sum << endl;  
    return 0;
}
/* Alternative version to print odd numbers between 12 and 50 using do-while loop   
#include <iostream>
using namespace std;

int main() {
    int num = 13; // first odd number after 12
    int sum = 0;

    do {
        cout << num << " ";
        sum += num;
        num += 2; // move to the next odd number
    } while (num <= 50);

    cout << "\nSum of odd numbers between 12 and 50 is: " << sum << endl;

    return 0;
}
*/