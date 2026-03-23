#include <iostream>
#include <iomanip>   
using namespace std;

int main() {
    double money;
    int year;

    cout << "Enter inherited money: " << endl;
    cin >> money;

    cout << "Enter year to live until: " << endl;
    cin >> year;

    int age = 18;
    int currentYear = 1800;

    
    while (currentYear <= year) {

        if (currentYear % 2 == 0) {
            
            money = money - 12000;
        }
        else {
            
            money = money - (12000 + 50 * age);
        }

        age = age + 1;           
        currentYear = currentYear + 1;
    }

    
    cout << fixed << setprecision(2);

    if (money >= 0) {
        cout << "Yes! He will live a carefree life and will have " 
             << money << " dollars left." << endl;
    }
    else {
        cout << "He will need " 
             << -money << " dollars to survive." << endl;
    }

    return 0;
}