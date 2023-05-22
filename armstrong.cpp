#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, sum = 0, r, temp;
    cout << "Enter the number";
    cin >> a;
    temp = a;
    while (a > 0)
    {
        r = a % 10;
        sum = sum + (r * r * r);
        a = a / 10;
    }
    if (temp == sum)
    {
        cout << "The number is armstrong\n";
    }
    else
    {
        cout << "The number is not armstrong\n";
    }
}
