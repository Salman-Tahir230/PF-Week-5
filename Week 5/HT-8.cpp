#include <iostream>
using namespace std;

int main()
{
    int age, machinePrice, toyPrice;
    cout << "Enter Lily's Age: " << endl;
    cin >> age;

    cout << "Enter the Price of Washing Machine:" << endl;
    cin >> machinePrice;

    cout << "Enter Unit Price Of Each Toy:  " << endl;
    cin >> toyPrice;

    int money = 0;
    int toys = 0;
    int evenMoney = 10;

    int i = 1;

    while (i <= age)
    {
        if (i % 2 == 0)
        {
            money = money + evenMoney - 1;
            evenMoney = evenMoney + 10;
        }
        else
        {
            toys++;
        }
        i++;
    }

    money = money + (toys * toyPrice) ;

    if (money >= machinePrice)
    {
        cout << "Yes! " << money - machinePrice;
    }
    else
    {
        cout << "No! " << machinePrice - money;
    }

    
}