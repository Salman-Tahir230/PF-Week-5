#include <iostream>
using namespace std;

// Function to show menu
void showMenu() {
    cout << "===== Restaurant Menu =====" << endl;
    cout << "1. View Food Menu" << endl;
    cout << "2. Place Order" << endl;
    cout << "3. View Order Status" << endl;
    cout << "4. Generate Bill" << endl;
    cout << "5. Contact Staff" << endl;
    cout << "6. Exit" << endl;
    cout << "Enter your choice: " << endl;
}

// Function to handle user choice
void handleChoice(int choice) {

    if (choice == 1) {
        cout << "You selected: View Food Menu." << endl;
    }
    else if (choice == 2) {
        cout << "You selected: Place Order." << endl;
    }
    else if (choice == 3) {
        cout << "You selected: View Order Status." << endl;
    }
    else if (choice == 4) {
        cout << "You selected: Generate Bill." << endl;
    }
    else if (choice == 5) {
        cout << "You selected: Contact Staff." << endl;
    }
}

int main() {
    int choice;

    while (true) {

        showMenu();      // display menu
        cin >> choice;   // take input

        if (choice >= 1 && choice <= 5) {
            handleChoice(choice);
        }
        else if (choice == 6) {
            cout << "Exiting Restaurant Management System. Thank you!" << endl;
            break;
        }
        else {
            cout << "Invalid input! Please enter a number between 1 and 6." << endl;
        }
    }

    return 0;
}