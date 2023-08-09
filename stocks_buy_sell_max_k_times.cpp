
#include<bits/stdc++.h>
using namespace std;



// space for helper functions 
int solve(int n)
{
   if(n==1)
   return 1;
   if(n==2)
     return 2;
    if(n%2 !=0)
     return  (max(  solve(n/2) , solve((n/2)+1) ) + 1 );
     else
     {
        return 1+ solve(n/2);
     }
}
int main()
{
string s = "Rahul";
string x="";
char ch='i';
 s.erase(s.begin()+1);
string k =s.substr(2, 2);
for(int i=0; i<s.length(); i++)
  x+=s[i];
 x+=ch;
  cout<<x<<endl;
  cout<<k;

return 0;
}