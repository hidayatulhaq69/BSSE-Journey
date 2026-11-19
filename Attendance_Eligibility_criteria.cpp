#include <iostream>
using namespace std;

int main() {
    int totalClasses, attendedClasses;
    double percentage;
    int extra = 0;
    int tempAttended, tempTotal;

    cout << "Enter total classes conducted: ";
    cin >> totalClasses;
    cout << "Enter classes attended: ";
    cin >> attendedClasses;

    if (totalClasses <= 0) {
        cout << "Error! Total classes 0 se bari honi chahiye." << endl;
    } else if (attendedClasses < 0 || attendedClasses > totalClasses) {
        cout << "Error! Attended classes galat hain." << endl;
    } else {
        percentage = (double)attendedClasses / totalClasses * 100;

        cout << "\nAttendance Percentage: " << percentage << "%" << endl;

        if (percentage >= 75) {
            cout << "Status: ELIGIBLE for Final Exam." << endl;
        } else {
            cout << "Status: NOT ELIGIBLE for Final Exam." << endl;

            // Kitni extra classes chahiye, loop se nikalte hain
            tempAttended = attendedClasses;
            tempTotal = totalClasses;
            while ((double)tempAttended / tempTotal * 100 < 75) {
                tempAttended++;
                tempTotal++;
                extra++;
            }
            cout << "You need to attend " << extra << " more consecutive classes to reach 75%." << endl;
        }
    }
    return 0;
}
