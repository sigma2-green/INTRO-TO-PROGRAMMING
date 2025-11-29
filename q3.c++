#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num1;
    int num2;
    cout<<"Enter the first number: ";
    cin>>num1;

    cout<<"Enter the second number: ";
    cin>>num2;

    int sum = num1 +num2;
    cout<<"Sum of  " <<num1 << " + " << num2 << " : "<< sum<<endl;

    int multiplication = num1 * num2;
    cout<<"Product of " <<num1 << " * " << num2 << " : "<< multiplication<<endl;


    int sub = num1 -num2;
   cout<<"Difference of " <<num1 << " - " << num2 << "  : "<< sub<<endl;


    double div = num1/num2;
    cout<<"Quotient of " <<num1 << " / " << num2 << " : "<< div<<endl;


      if (num1 >= 0)
        cout << "Square root of " << num1 << " : " << sqrt(num1) << endl;
    else if(num2 >=0)
        cout << "Square root of " << num2 << " : "<< sqrt(num2) << endl;


     double power = pow(num1,num2);
     cout<<"First number (" <<num1 << ") raised to the power of the second number (" << num2 << ") : "<< power<<endl;

    


  return 0;


}
