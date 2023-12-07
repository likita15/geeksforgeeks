/*Removes the duplicates from the sorted array:*/
#include<bits/stdc++.h>
using namespace std;
// without using the extra array temp[]
int RemoveDuplicates(int*a , int n)
{
    

    int res = 1;
    for(int i = 1 ; i < n ; i++)
    {
        if(a[res-1]!=a[i]) 
        {
            a[res] = a[i];
            res++;
        }
    }
    return res;
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
    int newsize = RemoveDuplicates(a , n);
    for(int i = 0 ; i< newsize;i++)
    {
        cout<<a[i]<<" ";
    }
return 0;
}