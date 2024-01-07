#include <bits/stdc++.h>
#define ll long long
using namespace std;

void swapAlternate(int arr[], int n){
    for(int i=0; i<n; i = i+2)
    {
      if(i+1 < n){
        swap(arr[i], arr[i+1]);
      }
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++)
    {
      cout<<arr[i] <<" ";
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
      cin>>arr[i];
    }

    swapAlternate(arr, n);
    printArray(arr, n);
    
    return 0;
}