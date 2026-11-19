#include <iostream>
using namespace std;

int main() {
    double balance = 20000;
    int choice;
    double amount;

    while (true) {
        cout << "\n------ ATM MAIN MENU ------" << endl;
        cout << "1. Check Account Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your Current Balance: Rs. " << balance << endl;
                break;

            case 2:
                cout << "Enter deposit amount: ";
                cin >> amount;
                if (amount <= 0) {
                    cout << "Error! Deposit amount positive hona chahiye." << endl;
                } else {
                    balance = balance + amount;
                    cout << "Deposit Successful! New Balance: Rs. " << balance << endl;
                }
                break;

            case 3:
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                if (amount <= 0) {
                    cout << "Error! Withdrawal amount positive hona chahiye." << endl;
                } else if (amount > balance) {
                    cout << "Error! Insufficient Balance." << endl;
                } else {
                    balance = balance - amount;
                    cout << "Withdrawal Successful! New Balance: Rs. " << balance << endl;
                }
                break;

            case 4:
                cout << "Thank you for using ATM. Allah Hafiz!" << endl;
                return 0;

            default:
                cout << "Error! Invalid choice. 1-4 me se select karen." << endl;
        }
    }
}
