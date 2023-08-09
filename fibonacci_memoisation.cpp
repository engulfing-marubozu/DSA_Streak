#include<bits/stdc++.h>

using namespace std;
long long int fib(int a, map<int,long long  int> &helper)
{  if(a == 1 || a==2 )
      return (long long int)1;
    if(helper[a])
      return helper[a];  
   long long  int x =fib(a-1, helper)+ fib(a-2, helper);
     helper[a]=x;
     return x;
}
int main()
{   map<int, long long int> helper;
    cout<< fib(50, helper);
}