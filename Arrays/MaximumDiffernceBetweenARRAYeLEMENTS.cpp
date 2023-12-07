#include <bits/stdc++.h>
using namespace std;
int findMaxdiff(int*arr , int n)
{
    int minval = arr[0];
    int maxdiff = arr[1]-arr[0];

    for(int i = 1 ; i < n ; i++)
    {
        maxdiff = max(maxdiff , arr[i]-minval);
        minval = min(arr[i] , minval);
    }
    return maxdiff;
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
   int ans = findMaxdiff(a , n);
   cout<<ans<<endl;

    return 0;
}