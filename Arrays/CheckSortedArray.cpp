// Second largest element in the array:
/*Naive method*/
    

/*
problem:

    Check if the array is sorted or not sorted means if should be either be sorted in the non-decreasing 
    manner or equal , consider array with the only one element is sorted
*/
#include<bits/stdc++.h>
using namespace std;
bool checkSorted(int*a , int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]<a[i]){return false;}
    }
    return true;
}
int main(){
    int a[1000];
    int n;
    cin>>n;
    for(int i = 0 ; i<n;i++)
    {
        cin>>a[i];
    }
    // for(int i = 0 ; i<n;i++)
    // {
    //     cout<<a[i]<<'\t';
    // }
    cout<<checkSorted(a,n)<<endl;
    
return 0;
}