#include <bits/stdc++.h>
using namespace std;
void reverseArray(int*arr , int low , int high)
{
    while(low < high)
    {
        swap(arr[low++],arr[high--]);
    }
}
void leftRotatebyD(int*arr , int n , int d)
{
    reverseArray(arr , 0 , d-1);
    reverseArray(arr , d , n-1);
    reverseArray(arr , 0 , n-1);
}
int main()
{
    int a[1000];
    int n,d;
    cin>>n>>d;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    leftRotatebyD(a , n , d);

    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }

    return 0;
}