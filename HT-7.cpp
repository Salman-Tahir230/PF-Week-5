#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter total count of numbers: " << endl;
    cin >> n;

    int num;

    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count5 = 0;

    int i = 1;

    while (i <= n) {
        cout << "Enter number " << i << ": " << endl;
        cin >> num;

        if (num < 200) {
            count1 = count1 + 1;
        }
        else if (num <= 399) {
            count2 = count2 + 1;
        }
        else if (num <= 599) {
            count3 = count3 + 1;
        }
        else if (num <= 799) {
            count4 = count4 + 1;
        }
        else {
            count5 = count5 + 1;
        }

        i = i + 1;
    }

    double p1 = (count1 * 100.0) / n;
    double p2 = (count2 * 100.0) / n;
    double p3 = (count3 * 100.0) / n;
    double p4 = (count4 * 100.0) / n;
    double p5 = (count5 * 100.0) / n;

    cout << "Histogram Results:" << endl;
    cout << p1 << "%" << endl;
    cout << p2 << "%" << endl;
    cout << p3 << "%" << endl;
    cout << p4 << "%" << endl;
    cout << p5 << "%" << endl;

    return 0;
}