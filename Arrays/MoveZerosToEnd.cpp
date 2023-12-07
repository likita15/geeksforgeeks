#include<bits/stdc++.h>
using namespace std;
void moveZeros(int*a , int n)
{
    /*
    method 1
    int czero = 0 , res = 0;
    for(int i = 0 ; i < n; i++)
    {
        if(a[i]!=0)
        {
            a[res++]=a[i];
        }
        else{czero++;}
    }
    int j = res ; 
    while(j<=res+czero-1)
    {
        a[j++]=0;
    }
    
    */



    /*method 2------- Best!*/
    int count = 0;
    for(int i = 0 ; i < n; i++)
    {
        if(a[i]!=0)
        {
            swap(a[i],a[count++]);
        }
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
moveZeros(a , n);
for(int i = 0 ; i<n;i++)
{
cout<<a[i]<<" ";
}

return 0;
}