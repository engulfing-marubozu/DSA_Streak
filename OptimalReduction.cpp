
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

// space for helper functions

int main()
{
  ll tc;
  cin >> tc;

  while (tc--)
  {
    ll n;
    cin >> n;
    ll ar[n];
    ll count = 0;
    for (ll i = 0; i < n; i++)
      cin >> ar[i];
   vector<ll> arr;
     arr.push_back(ar[0]);
      for(ll i=1; i<n; i++)
         {
          while(ar[i]==ar[i-1])
           i++;

           if(i<n)
      arr.push_back(ar[i]);
         }
  
    bool x = false;
    for (ll i = 2; i < arr.size(); i++)
    {
      if ((arr[i - 1] > max(arr[i], arr[i - 2])))
        count++;
      if ((arr[i - 1] < min(arr[i], arr[i - 2])))
      {
        x = true;
       
        break;
      }
    }
    if (x)
      cout << "NO\n";
    else
    {
      if (count > 1)
        cout << "NO\n";
      else
        cout << "YES\n";
    }
  }

  return 0;
}