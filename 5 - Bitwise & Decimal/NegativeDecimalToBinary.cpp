#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll n;
    cin >> n;

    unsigned ll i = 0, ans = 0;

    if (n < 0)
    {
        n = pow(2, 16) + n;
    }
    cout << n << endl;

    while (n)
    {
        int lastBit = n & 1;
        ans = (pow(10, i) * lastBit) + ans;
        n = n >> 1;
        i++;
        cout << ans <<endl;
    }
    cout << ans << endl;

    return 0;
}