#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{   int n;   cin>>n;
     vector<long long int> dp(n+1,0);
    
    dp[1]=1;
    dp[2]=1;

    for(long long int i=3; i<n+1; i++)
     {
        dp[i] = dp[i-1]+dp[i-2];
        cout<<dp[i]<<" ";
     }  
    return 0;
}