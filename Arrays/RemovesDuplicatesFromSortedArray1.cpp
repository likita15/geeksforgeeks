/*Removes the duplicates from the sorted array:*/
#include<bits/stdc++.h>
using namespace std;
int RemoveDuplicates(int*a , int n)
{
    int temp[n]; // creating a temporary array
    temp[0] = a[0];
    int res = 1;
    for(int i = 1 ; i < n ; i++)
    {
        if(temp[res-1]!=a[i]) 
        {
            temp[res] = a[i];
            res++;
        }
        
    
    }
    for(int i = 0 ; i < res;i++)
    {
        /*here we are not taking equal to res because a[res] will point out of the range of the array */
        a[i] = temp[i];
    }
    return res;
}
int main(){
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