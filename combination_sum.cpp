#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 11;
    int arr[] = {6,5,7,1,8,2,9,9,7,7,9};
    int sum=6;
    int dp[n][sum+1];
    memset(dp, 0, sizeof(dp));
    dp[0][arr[0]]=1;
    //dp[0][2*arr[0]]=1;
    for(int i=1; i<n; i++)
      for(int j=1; j<sum+1; j++)
      {
         if(j==arr[i])
          dp[i][j]+=1; 
           dp[i][j]+= dp[i-1][j];
         if(j-arr[i]>=0) 
        dp[i][j]+= dp[i][j-arr[i]]; 
      }
      cout<<" ";
      for(int i=0; i<7; i++)
        cout<<i%10<<" ";
        cout<<endl<<endl;
    
for(int i=0; i<n; i++)
     
      {  cout<<arr[i]<<" ";
          for(int j=0; j<sum+1; j++)
        cout<<dp[i][j]<<" ";
        cout<<endl;}
    return 0;

}