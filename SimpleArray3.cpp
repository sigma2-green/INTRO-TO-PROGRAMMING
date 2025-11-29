#include <iostream>
using namespace std;   

int main() {
    int ten[] = {10,20,30,40,50,60,70,80,90,100};
    int sum = 0, product = 1;

    // Range-based for loop: i is the **value**, not the index
    for (int i : ten) {
        sum += i;
        product *= i;
    }

    int numberOfElements = sizeof(ten) / 4;

    cout << "Sum of the elements in the array = " << sum << endl;
    cout << "Product of the elements in the array = " << product << endl;
    cout << "Mean of the elements in the array = " << sum / numberOfElements << endl;

    return 0;
}
