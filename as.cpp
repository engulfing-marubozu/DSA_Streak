#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
 
int solve(int length, string N)
{  

  vector<string> vect;
  vect.push_back("1111110");
  vect.push_back("0110000");
  vect.push_back("1101101");
  vect.push_back("1111001");
  vect.push_back("0110011");
  vect.push_back("1011011");
  vect.push_back("0011111");
  vect.push_back("1110000");
  vect.push_back("1111111");
  vect.push_back("1110011");
   
  int res=0;
  for(int i=0; i<length-1; i++)
    { 
  
       
      int r = (int)N[i]-48;
      int o= (int)N[i+1]-48;
     // cout<<r<< ' '<<o;
      string l = vect[r];
       string  m = vect[o];
       for(int j=0; j<7; j++)
         {
        
          if(l[j]!=m[j])
           res++;
         }
    }

     // cout<<res;
    return res;
}
 int main()
 {
  int n;
  string x;
  cin>>n>>x;
  int y= solve(n,x);
cout<<y;
  return 0;
 }