#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rev = 0, rem, orig, num;
    cout << "Enter a  number";
    cin >> num;
    orig = num;
    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    if (orig == rev)
    {
        cout << "Reverse is equal to original";
    }
    else
    {
        cout << "Reverse is NOT equal";
    }
    return 0;
}
