//Write a program to declare an array, nums  and initializes it with the values 12.25,32.50,16.90, 23, 45.68, 50.60
#include <iostream>
using namespace std;

int main(){
    int num[6];
    int sum = 0;
    //Prompt thr usr to enter valies to be stored in the array
    /*cout <<  "Enter six whole numbers to be stored by this program" << endl;
    cin >> num[0];
    cin >> num[1];
    cin >> num[2];
    cin >> num[3];  
    cin >> num[4];
    cin >> num[5];  
    //cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4] >> num[5];
    cout << "You entered the following values: " << endl;
    cout << num[0] << " , ";
    cout << num[1] << " , " ;
    cout << num[2] << " , " ;
    cout << num[3] << ", ";
    cout << num[4] << " , ";
    cout << num[5] << endl;*/

    cout << "Enter six whole numbers to be stored by this program" << endl;
    for (int index = 0; index <=5; index ++){
        cin >>  num[index];
        sum += num[index];//sum = sum + num[index];


    }

    cout << "Ýou entered the following values: " <<endl;
    for (int index = 0; index <=5; index ++){
        cout << num[index] << " , ";

    }
    cout << "\b" << " "; // To remove the last comma
    cout << "The sum of the elements = "<< sum << endl;
    cout << "The array size = " << sizeof(num) << endl;
    return 0;
}