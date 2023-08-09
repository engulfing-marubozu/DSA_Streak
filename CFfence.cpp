#include <bits/stdc++.h> 
using namespace std;
int main()
{   long int n,k,min;
   cin>>n>>k;
    long int arr[n];
    int l=0;


       cin>>arr[0];
       for(int j=1; j<n; j++)
         {cin>>arr[j];
           arr[j]+=arr[j-1];
         }
        min=arr[k-1];
    
       for(int left=0, right=k; right<n; left++,right++)
       {    
           if(arr[right]-arr[left]<min)
             {min=arr[right]-arr[left];
               k=left+2;
               l=1;}
        }  
     if(l)     
    cout<<k;
    else
     cout<<1;
    return 0;
}