#include <iostream>
using namespace std;

int main(){
    //Declare and initialize a 2D array using an initialization list
    int twoDArray[3][4] = {{1, 2, 3, 4} , {5, 6, 7, 8} , {9, 10, 11, 12}};
    //Use a loop to print elements of the 2D array on the screen
    for(int r = 0; r < 3 ; r++ ){
        for( int c = 0; c <4 ; c++){
            //to output all numbers
            cout << twoDArray[r][c] << " , "<< endl;
        }
    }
}