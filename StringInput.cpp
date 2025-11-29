#include <iostream> //HEADEER FILE
#include <string> //PREPORCESSOR DIRECTIVE
using namespace std;
 int main(){
   /*/ //using cin
    string fullName;
    cout << "Enter your full name:";
    cin >> fullName;
   

    cout << "Hi  " << fullName << ". Nice to meet you "<< endl;

    //using getline(cin, variable) function
    

    cout << "Enter your full name:\n";
    getline(cin, fullName);

    cout << "Hi again " << fullName << ". Nice to meet you "<< endl;//Using getline
  */

  string firstName, lastName , fullName , favoriteMeal , favoriteMovie;
   
    cout << "Enter your First Name: ";
    getline(cin, firstName);

    cout << "Enter your Last Name: ";
    getline(cin, lastName);

    fullName = firstName + " "+  lastName;

    cout << "Enter your Favorite Meal: ";
    getline(cin, favoriteMeal);

    cout << "Enter your Favorite Movie: ";
    getline(cin,  favoriteMovie);

   cout << "\n__________________________________________\n";
    cout << "|           PROFILE CARD                  |\n";
    cout << "|_________________________________________|\n";
    cout << "| First Name:      " << firstName      <<  "                 |\n";
    cout << "| Last Name:       " << lastName        << "                 |\n";
    cout << "| Full Name:  " << fullName        << "               |\n";
    cout << "| Favorite Meal:   " << favoriteMeal    << "                  |\n";
    cout << "| Favorite Movie:  " << favoriteMovie   << "                 |\n";
    cout << "|_________________________________________|\n";

    

 }