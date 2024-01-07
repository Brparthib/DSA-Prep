#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int x;
    cin>>x;

    int ans = 0;
    while(x != 0) {
        int digit = x%10;
        // if ans > 2^31 -1 --> (ans > INT_MAX/10)
        // if ans < -2^31 --> (ans < INT_MIN/10)
        if((ans > INT_MAX/10) || (ans < INT_MIN/10)) {
            return 0;
        }
        ans = ans * 10 + digit;
        x = x/10;
    }

    cout<<ans <<endl;
    
    return 0;
}