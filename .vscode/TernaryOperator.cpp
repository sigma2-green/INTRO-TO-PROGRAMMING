#include <iostream>
using namespace std;
 
int main(){
  int age;
  cout << "Enter the age of the child: ";
  cin >> age;
  //Using Ternary Operator to determine admission eligibility
  string message = (age>=4) ? "Admitted to school" : "Declined: Not admitted to school.";
  cout << message << endl;
    return 0;

}