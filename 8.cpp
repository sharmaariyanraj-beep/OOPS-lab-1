#include <iostream>
using namespace std;

int main()
{
    int days;
    cin >> days;

    if (days <= 5)
        cout << "Fine = 0.50";
    else if (days <= 10)
        cout << "Fine = 1";
    else if (days <= 30)
        cout << "Fine = 5";
    else
        cout << "Membership Cancelled";

    return 0;
}
