
#include<bits/stdc++.h>
using namespace std;

#define  ll long long int

// space for helper functions 

int main()
{
ll tc;
cin>>tc;

while(tc--)
{
// your testcases here
ll n;
cin>>n;
ll arr[n];
for(ll i=0; i<n; i++)
  cin>>arr[i];
ll count =0;
for(ll i=1; i<n-1; i++)
  {
    if(arr[i]==0 && arr[i-1])
     {
        arr[i-1]--;
        arr[i]++;
        count++;
     }
  }
for(ll i=0; i<n-1; i++) 
  
    count+=arr[i];
  cout<<count<<endl;
}

return 0;
}