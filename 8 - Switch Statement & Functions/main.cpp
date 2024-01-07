#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n = 1330;

    cout << endl;

    switch (n)
    {
    case 1:
        cout << n / 100 << endl;
        n = n - n / 100;
    case 2:
        cout << n / 20 << endl;
        n = n - n / 20;
        break;
    case 3:
        cout << n / 1 << endl;
        break;

    default:
        cout << "It is default case" << endl;
    }

    cout << endl;

    return 0;
}