#include <iostream>
using namespace std;
int main(){
    int begin = 20;
    int end = 25;
    int sum = 0;
    int i = begin;
    while(i <= end){
        sum += i; // sum = sum + i
        i++; // increment i by 1
    }
    cout << "Sum of 20-25: " << sum << endl;
}