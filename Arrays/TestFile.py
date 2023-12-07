#include<bits/stdc++.h>
using namespace std;
void reverseArray(int*arr , int low , int high)
{
    while(low < high)
    {
        swap(arr[low++],arr[high--]);
    }
}
int main()
{
int a[1000];
int n;
cin>>n;
for(int i = 0 ; i<n;i++)
{
cin>>a[i];
}
reverseArray(a , 0 , n-1);
for(int i = 0 ; i<n;i++)
{
cout<<a[i]<<" ";
}

return 0;
}