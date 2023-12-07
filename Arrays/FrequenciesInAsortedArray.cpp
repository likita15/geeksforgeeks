#include <bits/stdc++.h>
using namespace std;
void PrintFrequenciesofElement(int*arr , int n)
{
    int celem = 1;
    int cval = arr[0];
    for(int i = 1 ; i<n ; i++)
    {
        if(cval == arr[i])
        {
            celem++;
        }
        else
        {
            cout<<celem<<" ";
            celem = 1 ; 
            cval = arr[i];
        }
    }
    cout<<celem<<" ";
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
    PrintFrequenciesofElement(a , n);

    return 0;
}