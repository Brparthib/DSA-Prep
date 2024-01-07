#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    
    int m = n;
    int mask = 0;

    //edge case
    if(n==0){
        return 1;
    }

    while (m != 0)
    {
        cout<<m <<endl;
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    cout<< ~n <<endl;
    cout<<mask <<endl;

    int ans = (~n) & mask;

    cout << ans;

    return 0;
}