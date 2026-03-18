#include <iostream>
using namespace std;

void showMenu()
{
    cout << "===== Simple Calculator =====" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Clear Screen" << endl;
    cout << "6. Exit" << endl;
    cout << "Enter your choice: " << endl;
}

void calculate(int choice, double num1, double num2)
{

    if (choice == 1)
    {
        cout << "Result = " << num1 + num2 << endl;
    }
    else if (choice == 2)
    {
        cout << "Result = " << num1 - num2 << endl;
    }
    else if (choice == 3)
    {
        cout << "Result = " << num1 * num2 << endl;
    }
    else if (choice == 4)
    {
        if (num2 == 0)
        {
            cout << "Error: Division by zero not allowed." << endl;
        }
        else
        {
            cout << "Result = " << num1 / num2 << endl;
        }
    }
}

int main()
{
    int choice;
    double num1, num2;

    while (true)
    {

        showMenu();    
        cin >> choice; 

        if (choice >= 1 && choice <= 4)
        {
            cout << "Enter first number: " << endl;
            cin >> num1;

            cout << "Enter second number: " << endl;
            cin >> num2;

            calculate(choice, num1, num2);
        }
        else if (choice == 5)
        {
            cout << "Screen cleared." << endl;
        }
        else if (choice == 6)
        {
            cout << "Exiting Calculator. Goodbye!" << endl;
            break;
        }
        else
        {
            cout << "Invalid input! Please enter a number between 1 and 6." << endl;
        }
    }

    return 0;
}