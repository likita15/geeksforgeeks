// Second largest element in the array:o(n)
/*Efficient method*/
#include<bits/stdc++.h>
using namespace std;

int smax(int*a , int n) // returns second maximum value
{
    int smax;
    int max = INT_MIN; 
    for(int i = 0 ; i<n;i++)
    {
        if(a[i]>max){smax = max ; max = a[i]; }
        else if(a[i]<max)
        {
            if(a[i]>smax){smax = a[i];}
            // checks if the second maximum is smaller than the given array element number or not and if in case it happens then smax will be equal to that number
        }

    }
    return smax;
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
    cout<<endl;
    cout<<smax(a,n)<<endl;
    
return 0;
}