#include <iostream>
using namespace std;

int main() {
    int units;
    double charges = 0, total = 0;
    double serviceCharge = 250;

    cout << "Enter total units consumed: ";
    cin >> units;

    if (units < 0) {
        cout << "Error! Units negative nahi ho sakte." << endl;
    } else {
        if (units <= 100) {
            charges = units * 10;
        } else if (units <= 200) {
            charges = (100 * 10) + (units - 100) * 15;
        } else {
            charges = (100 * 10) + (100 * 15) + (units - 200) * 20;
        }

        total = charges + serviceCharge;

        cout << "\n------ ELECTRICITY BILL ------" << endl;
        cout << "Units Consumed: " << units << endl;
        cout << "Electricity Charges: Rs. " << charges << endl;
        cout << "Service Charge: Rs. " << serviceCharge << endl;
        cout << "Total Payable: Rs. " << total << endl;
    }
    return 0;
}
