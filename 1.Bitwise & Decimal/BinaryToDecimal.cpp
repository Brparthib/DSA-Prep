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
    cin>>n;

    int ans = 0;
    int i = 0;

    while (n!=0) {
        int digit = n%10;

        if(digit == 1){
            ans = ans + pow(2, i);
        }

        n = n/10;
        i++;
    }

    cout<< ans << endl;
    
    return 0;
}