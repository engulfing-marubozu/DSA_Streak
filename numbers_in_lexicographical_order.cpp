#include<bits/stdc++.h>
using namespace std;

void print_lexicography(int x, int &n )
{   
 
    if(x>n )
      return;
       
       cout<<x<<" ";
    for(int i=0; i<=9; i++)
        print_lexicography(x*10 + i, n);
}
int main()
{   
    int n;
    cin >> n;
    cout<<0<<" ";
    vector<int> vect;
  
     for(int i=1; i<=9 ; i++)
      print_lexicography( i, n);
    return 0;
}