#include <iostream>
using namespace std;

//Global variable

int globalVar = 100;
/*
 A variable declared outside of any function  and used within the function
*/
void examplefunction(int paramVar)//variable declared in the function

{
    cout << "Parameter variable" << paramVar <<endl;

}
int main(){
//local variable
int localVar = 50;/*variable declared within the main function and is accesible only within the main function
and accesible only within this function
*/

//Constant variable
const float PI = 3.14159; /*A constant variable whose value cannot be 
changed after initalization*/

//Static variable
static int staticVar = 0;/*A static variable that retains its value
between function calls*/

void exampleFunction(int paramVar);

return 0;


}

