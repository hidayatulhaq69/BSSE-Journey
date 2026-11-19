#include <iostream>
using namespace std;

int main() {
    double price, total = 0;
    double discountPercent = 0, discountAmount = 0, payable = 0;
    int count = 0;

    cout << "Enter price of each item (0 to finish):" << endl;

    while (true) {
        cout << "Enter item price: ";
        cin >> price;

        if (price == 0) {
            break;
        } else if (price < 0) {
            cout << "Error! Negative price allow nahi hai." << endl;
        } else {
            total = total + price;
            count++;
        }
    }

    if (count == 0) {
        cout << "No items were purchased." << endl;
    } else {
        if (total < 5000) {
            discountPercent = 0;
        } else if (total <= 9999) {
            discountPercent = 5;
        } else if (total <= 19999) {
            discountPercent = 10;
        } else {
            discountPercent = 15;
        }

        discountAmount = total * discountPercent / 100;
        payable = total - discountAmount;

        cout << "\n------ FINAL BILL ------" << endl;
        cout << "Total Purchase Amount: Rs. " << total << endl;
        cout << "Discount Percentage: " << discountPercent << "%" << endl;
        cout << "Discount Amount: Rs. " << discountAmount << endl;
        cout << "Final Payable Amount: Rs. " << payable << endl;
    }
    return 0;
}
