/*Find the reverse of an array:*/
#include<bits/stdc++.h>
using namespace std;
void findReverse(int*a  , int n)
{
    int low = 0;
    int high = n-1;

    while(low < high)
    {
        //doing swap operation:- and swaping the first element with the last element
        int c  =  a[low] ;
        a[low] = a[high];
        a[high] = c;

        low++; 
        high--;

    }
}
int main(){
     int a[1000];
    int n;
    cin>>n;
    for(int i = 0 ; i<n;i++)
    {
        cin>>a[i];
    }
    findReverse(a , n);
    for(int i = 0 ; i<n;i++)
    {
        cout<<a[i]<<" ";
    }
   
return 0;

}