#include <iostream>
using namespace std;

int main()
{
    string username, password;
    bool login = false;

    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter Username: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> password;

        if (username == "admin" && password == "1234")
        {
            login = true;
            cout << "Login Successful" << endl;
            break;
        }
        else
        {
            cout << "Wrong Username or Password" << endl;
        }
    }

    if (!login)
    {
        cout << "Access Denied";
        return 0;
    }

    int choice = 0;
    string studentName = "", courseName = "";
    int age = 0;

    while (choice != 4)
    {
        cout << "\n1 → Add Student" << endl;
        cout << "2 → View Student" << endl;
        cout << "3 → Add Course" << endl;
        cout << "4 → Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Student Name: ";
            cin >> studentName;
            cout << "Enter Age: ";
            cin >> age;
        }
        else if (choice == 2)
        {
            if (studentName == "")
            {
                cout << "No student added yet" << endl;
            }
            else
            {
                cout << "Student Name: " << studentName << endl;
                cout << "Age: " << age << endl;
            }
        }
        else if (choice == 3)
        {
            cout << "Enter Course Name: ";
            cin >> courseName;
        }
        else if (choice == 4)
        {
            cout << "Program Ended";
        }
        else
        {
            cout << "Invalid Choice" << endl;
        }
    }
}