/*Simple admissions program to admit students to different learning levels based on
their age  subject to a maximum age of 16 */
#include <iostream> 
using namespace std;

int main(){
 int age;
 string name;
    cout << "Welcome to the School Admissions Portal!";
    cout << "Enter the full name of the student:";
    getline(cin, name);

    cout << "Enter the  age of the student: ";
    cin >> age;
 // Using if-else else-if statements to determine admission level
   if(age >=7 && age <16)
   {
    cout << "Congratulations!" <<endl;
    cout << name << " is admitted to Grade School." << endl;
   } else if(age >=5 && age<=6)
   {
    cout << "Congratulations!" <<endl;
    cout << name << " is admitted to Kindergarten." << endl;    
   }else if(age >=3 && age <=4)
   {
    cout << "Congratulations!" <<endl;
    cout << name << " is admitted to Preschool." << endl;
   }else if(age >=1 && age <=2)
   {
    cout << "Congratulations!" <<endl;
    cout << name << " is admitted to Play Group." << endl;
   }
   else{
    cout << "Sorry " << name << " does not meet the age requirements for admission." << endl;
   }



    



}