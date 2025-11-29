#include <iostream>
using namespace std;
int main(){
    string stringText = "Hello";

    for(char ch : stringText){
        cout << ch << endl;
    }
    cout << endl;
    return 0;
}