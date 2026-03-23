#include <iostream>
using namespace std;

int main() {
    int number, digit;
    cin >> number >> digit;

    int count = 0;

    for (; number > 0; number = number / 10) {
        int lastDigit = number % 10;
        if (lastDigit == digit) {
            count++;
        }
    }

    cout << count;

    
}