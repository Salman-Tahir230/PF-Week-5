#include <iostream>
using namespace std;

int main() {
    int pin, correctPin = 1234;
    bool login = false;

    for (int i = 1; i <= 3; i++) {
        cout << "Enter PIN: ";
        cin >> pin;

        if (pin == correctPin) {
            login = true;
            cout << "Login Successful"<<endl;
            break;
        } else {
            cout << "Wrong PIN"<<endl;
        }
    }

    if (!login) {
        cout << "Card Blocked";
        return 0;
    }

    int choice = 0;
    int balance = 1000;
    int amount;

    while (choice != 4) {
        cout << "1 → Check Balance" << endl;
        cout << "2 → Deposit Money"<<endl;
        cout << "3 → Withdraw Money"<<endl;
        cout << "4 → Exit"<<endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Balance: " << balance << endl;
        } 
        else if (choice == 2) {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance = balance + amount;
            cout << "Amount Deposited"<<endl;
        } 
        else if (choice == 3) {
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount <= balance) {
                balance = balance - amount;
                cout << "Please collect your cash"<<endl;
            } else {
                cout << "Insufficient Balance"<<endl;
            }
        } 
        else if (choice == 4) {
            cout << "Thank you for using ATM";
        } 
        else {
            cout << "Invalid Choice"<<endl;
        }
    }

   
}