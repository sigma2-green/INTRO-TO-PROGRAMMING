/* Simple admission program  to admit students to different groups  based on their interests using switch case */
#include <iostream> 
using namespace std;

int main(){
 int age;
 string name ;
char interest;
 
    cout << "Welcome to the School Admissions Portal!"<<endl;
    cout << "Enter the full name of the student:"<<endl;
    getline(cin, name);

    cout << "Enter the  age of the student: ";
    cin >> age;

    if(age>=4 && age <=10){
    cout << "Enter the student's interest: \n\tS for Soccer \n\tA for Art \n\tM for Music\n\tC for Athletics\n\tT for Toys\n\tO for Others: ";
    cin >> interest;

    switch (interest) {
            case 'S': case 's':
                cout << "Admitted to school" <<endl;
                cout << name << " is assigned to Soccer Playgroup." << endl;
                break;
            case 'A': case 'a':
               cout << "Admitted to school" <<endl;
               cout << name << " is assigned to Art Playgroup." << endl;
                break;
            case 'M': case 'm':
                cout << "Admitted to school" <<endl;
                cout << name << " is assigned to Music Playgroup." << endl;
                break;
            case 'C': case 'c':
                cout << "Admitted to school" <<endl;
                cout << name << " is assigned to Athletics Playgroup." << endl;
                break;
            case 'T': case 't':
                cout << "Admitted to school" <<endl;
                cout << name << " is assigned to Toys Playgroup." << endl;  
                break;
            case 'O': case 'o':
                cout << "Admitted to school" <<endl;
                cout << name << " is assigned to Other Playgroup." << endl;
                break;
     
}
}   else{
        cout << "Declined: Not admitted to school." << endl;
    }

    //More actions/structure/statements can be added here
    return 0;
    }