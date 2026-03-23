#include <iostream>
using namespace std;

int main() {
    int num, digit;
    int count = 0;

    cout << "Enter number: ";
    cin >> num;

    cout << "Enter digit to find: ";
    cin >> digit;

    while (num != 0) {
        int last = num % 10;

        if (last == digit) {
            count++;
        }

        num = num / 10;
    }

    cout << "Frequency = " << count;


}