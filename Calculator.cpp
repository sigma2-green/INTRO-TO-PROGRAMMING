#include <iostream>
using namespace std;

int main(){
 int num1, num2;
    int sum, product, difference,modulus;
    double quotient;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    sum = num1 + num2;

    cout << "Sum: " << sum << endl;
    difference = num1 - num2;
    cout << "Difference: " << difference << endl;
    product = num1 * num2;
    cout << "Product: " << product << endl;
    quotient = num1/num2;
    cout << "Quotient: " << quotient << endl;
    modulus = num1 % num2;
    cout << "Modulus: " <<modulus << endl;


    return 0;
}