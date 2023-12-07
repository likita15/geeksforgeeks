#include <bits/stdc++.h>
using namespace std;
int totalprofit(int*arr , int n)
{
    int tp = 0  ; 
    for(int i =  1; i < n ; i++)
    {
        if(arr[i]-arr[i-1]>0)
        {
            tp+=arr[i]-arr[i-1];
        }
    }
    return tp ; 
}
int main()
{
    int a[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<totalprofit(a , n)<<endl;

    return 0;
}