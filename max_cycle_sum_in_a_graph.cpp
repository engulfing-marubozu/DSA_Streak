
#include<bits/stdc++.h>
using namespace std;
 
#define  ll long long int
#define  read(arr, n)  for(ll i=0; i<n; i++) cin>>arr[i];
#define fori(s,e,g)    for(ll i=s; i<=e; i+=g)

// space for helper functions
ll res=0;
void solve(ll index, vector<ll> adj[], ll sum,  vector<bool> &visited,  vector<bool> &visited_g)
{
    
        if(visited[index])
          {  
           
            sum-=index;
               if(res<sum)
                 res=sum;
                 return;
          }

          for(auto it: adj[index])
             {
                visited[index]=true;
                visited_g[index]=true;
                solve(it, adj, sum+it, visited, visited_g);
                visited[index]=false;
             }
             return;
}
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
read(arr,n);
vector<ll> adj[n];
fori(0,n-1, 1)
   adj[i].push_back(arr[i]);
 vector<bool> visited(n, false);   
  vector<bool> visited_g(n, false);  
 res=0;
 for(int i=0; i<n; i++)
  if(!visited_g[i])
 solve(0,adj, 0, visited, visited_g);
 cout<<res<<endl;
}
return 0;
}
