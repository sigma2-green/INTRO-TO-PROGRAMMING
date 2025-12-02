#include <iostream>
using namespace std;

int main(){
    /*double num = 15.5;
    int myNum;

    myNum = num;
    cout << myNum << endl;*/
    char myChar;
    int myint = 45;
    float myfloat = 4.567;
    int myNum;

    myChar = static_cast<char>(myint);// int to char
    myNum = static_cast<int>(myfloat);// float to integer


    //bool boolValue = true;


    /*char myChar = 'C';
    int charCasted;
    charCasted = myChar;//Implicit type casting(Automatic)

    cout<< charCasted << endl;
    cout << boolValue << endl;

        double myNum2 = 20.678;
        int myNewNum2 = int(myNum2);//explicit type casting 

        cout << myNewNum2 << endl;
  
    return 0 ;
    // the double value initialised on the first line is casted into a integer
    */

}