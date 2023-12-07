// Second largest element in the array:
/*Naive method*/


/*problem:
Find out the second maximum element in the array:
*/
#include<bits/stdc++.h>
using namespace std;
int max(int*a , int s) // returns maximum value 
{
    int max = INT_MIN;
    for(int i=0; i< s; i++)
    {
        if(max<a[i]){max = a[i];}
    }
    return max;
}
int smax(int*a , int s) // returns second maximum value
{
    int m = max(a,6);
    int res = -1;
    for(int i = 0 ; i < s ; i++)
    {
        if(a[i]!=m)
        {
            if(res==-1)
            {
                res = i;
            }
           else if(a[i]>a[res]){res = i;}
        }

    }
    return a[res];
}
int main(){
    int a[1000];
    int n;
    cin>>n;
    for(int i = 0 ; i<n;i++)
    {
        cin>>a[i];
    }
    for(int i = 0 ; i<n;i++)
    {
        cout<<a[i]<<'\t';
    }
    cout<<smax(a,n)<<endl;
    
return 0;
}