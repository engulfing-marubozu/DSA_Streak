#include<iostream>
#include<vector>
#define ll long long int
using namespace std;
vector<int> dp(100,-1);
int party (int n)
{   if(n==1|| n==0)
     return 1;
    if(n<0)
     return 0;
    if(dp[n]!=-1)
     return dp[n];
   
    
    int x= party(n-1)+ party(n-2) + party(n-3) + party(n-4) + party(n-5)+ party(n-6);
    dp[n]=x;
    return x;
}


int main()
{   
    int x= party(4);
  
    cout<<x;
    return 0;
}

