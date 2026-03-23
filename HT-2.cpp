#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter length of Fibonacci series: ";
    cin >> n;

    int a = 0;
    int b = 1;
    int next;

    int i = 1;

    while (i <= n) {
        cout << a << " ";

        next = a + b;
        a = b;
        b = next;

        i++;
    }

    return 0;
}