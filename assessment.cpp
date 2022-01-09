#include <bits/stdc++.h>
using namespace std;


int getMissingNo(int a[], int n)
{

    int total = (n + 0) * (n + 1) / 2;
    for (int i = 0; i < n; i++)
        total -= a[i];
    return total;
}


int main()
{
    int arr[] = { 3,0,1};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+n);
    int miss = getMissingNo(arr, n);
    cout << miss;
}