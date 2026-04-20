#include <iostream>
using namespace std;


void showMenu() {
    cout << "===== Library System =====" << endl;
    cout << "1. Add Books" << endl;
    cout << "2. View Books" << endl;
    cout << "3. Borrow Books" << endl;
    cout << "4. Return Books" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: " << endl;
}


void handleChoice(int choice) {

    if (choice == 1) {
        cout << "You selected: Add Books" << endl;
    }
    else if (choice == 2) {
        cout << "You selected: View Books" << endl;
    }
    else if (choice == 3) {
        cout << "You selected: Borrow Books" << endl;
    }
    else if (choice == 4) {
        cout << "You selected: Return Books" << endl;
    }
}

int main() {
    int choice;

    while (true) {

        showMenu();     
        cin >> choice;   

        if (choice >= 1 && choice <= 4) {
            handleChoice(choice);
        }
        else if (choice == 5) {
            cout << "Exiting Library System" << endl;
            break;
        }
        else {
            cout << "Invalid input! Please enter a number between 1 and 5." << endl;
        }
    }

    
}