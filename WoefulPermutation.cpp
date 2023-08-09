
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
  ll n;
  cin>>n;
  if(n%2==0)
  {
      for(ll i=1; i<n; i+=2)
         cout<<i+1<<" "<<i<<" ";
  }
 
  else
  {
    cout<<1<<" ";
   for(ll i=2; i<n; i+=2)
         cout<<i+1<<" "<<i<<" ";
  }
   cout<<endl;
}

return 0;
}