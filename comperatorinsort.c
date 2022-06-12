#include<iostream>
#include<map>
#include <bits/stdc++.h> 
using namespace std;
bool compare(pair<int,int> a, pair<int, int> b)
{
  if(a.second!=b.second)
    return (a.second>b.second);
  else 
     return (a.first<b.first);  
}

int main() 
{ 
    vector<int> rahul;
    map<int, int> m;
    vector<pair<int,int>> v;
      
        rahul.push_back(5);
        rahul.push_back(10);
         rahul.push_back(10);
        rahul.push_back(20);
         rahul.push_back(20);
        rahul.push_back(50);
        rahul.push_back(20);
    for(int i=0; i<7; i++)
      m[rahul[i]]++;
    map<int,int> :: iterator it;
    for(it=m.begin(); it!=m.end(); it++)
        cout<< it->first << "  "<<it->second<<"\n";  
  for(it=m.begin(); it!=m.end(); it++)
      v.push_back(make_pair(it->first, it->second));

     

    sort(v.begin(), v.end(), compare) ;  
     for(int k=0; k<v.size(); k++)
        cout<< v[k].first << "  "<<v[k].second<<"\n";  
    
    return 0; 
}
