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
 ll  n;
 cin>>n;
 ll arr[n];

 ll min_arr[n];

 for(ll i=0; i<n; i++)
  cin>>arr[i];
min_arr[n-1]=arr[n-1];
for(ll i=n-2; i>=0; i--)
  min_arr[i]=min(min_arr[i+1], arr[i]);
// cout<<"            ";
//  for(ll i=0; i<n; i++)
//   cout<<min_arr[i]<<" ";
//   cout<<"            ";
set<int> sete;
set<int> mete;

ll count=0;
for(ll i=0; i<n; i++)
 {  
     if(sete.find(arr[i])!=sete.end())
           { 
            // cout<<i<<" hello\n";
            arr[i]=0;
            min_arr[i]=0;
            for(auto it : mete)
           {
            // cout<<it<<" hello\n";
            sete.insert(it);
            count++;
           }
           mete.clear();
           }
    
    else if(arr[i]> min_arr[i])
    {
        sete.insert(arr[i]);
        arr[i]=0;
         count++;

         for(auto it : mete)
           {
            // cout<<it<<" hello\n";
            sete.insert(it);
            count++;
           }
           mete.clear();
    }
    else
    { 
        //  cout<<arr[i]<<" "<<i<<" "<<"djbvd\n";
        mete.insert(arr[i]);
    }
 }

 cout<<count<<endl;
}

return 0;
}