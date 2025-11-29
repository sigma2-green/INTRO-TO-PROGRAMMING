//For loop to print even numbers from 12 to 50 and their sum
#include <iostream>
using namespace std;
int main (){
    int sum = 0;
    //Print even numbers from 12 to 50 using for loop
  for(int num=12; num <=50 ; num+=2){
    cout<< num << " , ";
    sum += num;

  }
cout << "\b" << " "; // To remove the last comma
cout << "\nThe sum of even numbers from 12 to 50 is: " << sum << endl;
  return 0; 
}


