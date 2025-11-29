#include <iostream>
using namespace std;

int main() {
    double buyingPrice, sellingPrice, profit, loss;

    // Input section
    cout << "Enter the buying price of the motor vehicle: ";
    cin >> buyingPrice;

    cout << "Enter the selling price of the motor vehicle: ";
    cin >> sellingPrice;

    // Compute profit
    profit = sellingPrice - buyingPrice;

    //compute loss
    loss = buyingPrice - sellingPrice;

    // Output section
    cout << "\n========== PROFIT REPORT ==========\n";
    cout << "Buying Price:   " << buyingPrice << endl;
    cout << "Selling Price:  " << sellingPrice << endl;

    if (sellingPrice > buyingPrice)
        cout << "Profit Made:    " << profit << endl;
    else if (buyingPrice > sellingPrice)
        cout << "Loss Incurred:  " << loss << endl;
    else
        cout << "No Profit or Loss." << endl;

    cout << "===================================\n";

    return 0;
}
