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

    int m = 1;
    for(int i=0; i<=30; i++)
    {
        if(m==n){
            cout<<i;
        }

        m = m * 2;
    }
    
    return 0;
}