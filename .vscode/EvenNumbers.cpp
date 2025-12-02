// Even numbers from 12 to 28nusing while loop
#include <iostream>
using namespace std;

int main(){
    int num = 12;
    cout << "Even numbers from 12 to 28 are: " << endl;
    while(num <= 28){
        cout << num << ",";
        num += 2; // Increment by 2 to get the next even number
    }
    //Execution continues here after the loop

    return 0;
}