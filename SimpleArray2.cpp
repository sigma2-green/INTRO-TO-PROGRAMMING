//A simple summation of array elements using for loop
#include <iostream>
using namespace std;   

int main(){
   int ten[]={10,20,30,40,50,60,70,80,90,100};
   int sum = 0, product = 1;
   //sum = ten[0] + ten[1] + ten[2] + ten[3] + ten[4] + ten[5] + ten[6] + ten[7] + ten[8] + ten[9];
   for(int i = 0; i <10; i ++){
      product *= ten[i]; // product = product * ten[i];
      sum += ten[i]; // sum = sum + ten[i];
   }
   cout << "Sum of the elements in the array  = " << sum << endl;
   cout << "Product of the elements in the array  = " << product << endl;
   int numberOfElements = sizeof(ten) /4; //Determine the number of elements in the array
   cout << "Mean of the elements in the array  = " << sum/numberOfElements<< endl;
// maximun and minimum elements in the array
    int max = ten[0];
    int min = ten[0];
    for(int i = 1; i <10; i ++){
        if(ten[i] > max){
            max = ten[i];
        }
        if(ten[i] < min){
            min = ten[i];
        }
    }
   cout << "Maximum element in the array = " << max << endl;
   cout << "Minimum element in the array = " << min << endl;
   cout << "Size of the array = " << sizeof(ten)<< endl;
   return 0;   
}