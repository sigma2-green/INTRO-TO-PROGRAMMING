#include <iostream>
using namespace std;

int main(){
    //variable declaration
  int num1 = 16 , num2 =4;

  //ARITHMETIC / MATHEMATICAL OPERATIONS
  cout << "ADDITION" << num1 << " + " << num2 << " = " <<endl;
  cout << "SUBTRACTION" << num1 << " - " << num2 << " = " << endl;
  cout << "MULTIPLICATION" << num1 << " * " << num2 << " = " << endl;
  cout << "DIVISION" << num1 << "/" << num2 << " = " <<endl;
  cout << "MODULUS" << num1 << "%" << num2 << " = " <<endl; 
  cout << "PRE-INCREMENT: ++  " << num1 << "=" << ++num1 <<endl;   
  cout << "POST-INCREMENT" << num1++ << " = " << num1 <<endl;
  cout << "DECREMENT:--" << num2 << " = " << (--num2) << endl;
  cout << "DECREMENT" << num2-- << " = " << num2 << endl;
  cout << "CONFINED INCREMENT AND ASSIGNMENT: num1+=2;" << (num1 +=2 ) << "\n\n";
  cout << "CONFINED DECREMENT AND ASSIGNMENT: num1-=2;" << (num1-=2) << "\n\n";
  cout << "CONFINED MULTIPLY AND ASSIGN: num1 *=2;" << (num1*=2) << "\n\n";
  cout << "CONFINED DIVIDE AND ASSIGN: num1 /= 2;"<< (num1 /= 2) << "\n\n";

  //COMPARISON LOGIC OPERATIONS
  cout << "3 > 2" << " = " << (3 >  2) << endl;
  cout << "3 < 2" << " = " << ( 3 < 2) <<endl;
  cout << "4 <= 3" << " = " << ( 4 <= 3) << endl;
  cout << "4 >= 3" << " = " << (4 >= 3) << endl;
  cout << "3 == 3" << " = " << ( 3 == 3) << endl;
  cout << "!(4 >= 3)" << " = " << (4 >= 3) << endl;

  //BOOLEAN OPERATIONS(AND &&, OR ||, XOR )
  cout << "true && true" << ((3 > 2) && (4 >= 2)) << endl;
  cout << "true && false" << ((3 > 2) && (4 <= 2)) << endl;
  cout << "false && true" << ((3 < 2) && (4 >= 2)) << endl;
  cout << "false && false" << ((3 < 2) && (4 >= 2)) << endl;

  // Boolean OR
  cout << "true || true" << ((3 > 2) || (4 >= 2)) << endl;
  cout << "true || false" << ((3 > 2) || (4 <= 2)) << endl;
  cout << "false || true" << ((3 < 2) || (4 >= 2)) << endl;
  cout << "false||  false" << ((3 < 2) || (4 >= 2)) << endl;

  //POINTER OPERATORS

  //TERNARY OPERATORS
} 