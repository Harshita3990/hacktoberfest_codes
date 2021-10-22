#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, l, s, n = 6;
    int num[] = {11, 10, 13, 5, 12, 7};

    if (num[0] < num[1])
    {
        l = num[1];
        s = num[0];
    }
    else
    {
        l = num[0];
        s = num[1];
    }

    for (i = 0; i < n; i++)
    {
        if (num[i] > l)
        {
            s = l;
            l = num[i];
        }
        else if (num[i] > s && num[i] != l)
        {
            s = num[i];
        }
    }

    cout << s << endl;
    return 0;
}
