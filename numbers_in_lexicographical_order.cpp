#include<bits/stdc++.h>
using namespace std;

void print_lexicography(int x, int &n )
{   
 
    if(x>n )
      return;
   
       cout<<x<<" ";
    for(int i= (x==0)?1:0; i<=9; i++)   // putting condition for starting point of thr loop
        print_lexicography(x*10 + i, n);
}
int main()
{   
    int n;
    cin >> n;
    
    vector<int> vect;
  
  
      print_lexicography( 0, n);
    return 0;
}