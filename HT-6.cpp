#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter First number: ";
    cin >> a ;
    cout<< "Enter Second Number: ";
    cin>> b;

    int i = 1;
    int gcd = 1;

    while (i <= a && i <= b) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
        i++;
    }

    int lcm = (a * b) / gcd;

    cout << "GCD = " << gcd << endl;
    cout << "LCM = " << lcm;

   
}