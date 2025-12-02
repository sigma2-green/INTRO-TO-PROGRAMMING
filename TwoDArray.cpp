#include <iostream>
using namespace std;

int main(){
    //Declare and initialize a 2D array using an initialization list
    int twoDArray[3][4] = {{1, 2, 3, 4} , {5, 6, 7, 8} , {9, 10, 11, 12}};
    // twoDArray[0][0] = 1
    // twoDArray[0][1] = 2
    // twoDArray[0][2] = 3
    // twoDArray[0][3] = 4 
    // twoDArray[1][0] = 5
    // twoDArray[1][1] = 6
    // twoDArray[1][2] = 7
    // twoDArray[1][3] = 8
    // twoDArray[2][0] = 9
    // twoDArray[2][1] = 10
    // twoDArray[2][2] = 11
    // twoDArray[2][3] = 12
    //Use a loop to print elements of the 2D array on the screen
    for(int r = 0; r < 3 ; r++ )// r = index of the sub-array/row/list in the 2D array
    {
        for( int c = 0; c <4 ; c++)// c = index of each element in the sub-array/row/list
        {
            //to output all numbers
            cout << twoDArray[r][c] << " , "<< endl;
        }
    }
    cout << "\b"; // To remove the last comma
    return 0;
}
