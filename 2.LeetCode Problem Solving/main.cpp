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

    n = (n<<1) | 1;
    cout<< n <<endl;
    n = (n<<1) | 1;
    cout<< n <<endl;
    n = (n<<1) | 1;
    cout<< n <<endl;

    // cout<< ~n <<endl;

    // int m = n;
    // int mask = 0;

    // while (m!=0)
    // {
    //     mask = (mask<<1) | 1;
    //     m = m>>1;
    // } 

    // ll ans = 0;
    // int i = 0;

    // while(mask!=0){
    //     int bit = mask&1;
    //     ans = (bit * pow(10,i)) + ans;
    //     mask = mask>>1;
    //     i++;
    // }

    // cout<< ans;


    
    return 0;
}