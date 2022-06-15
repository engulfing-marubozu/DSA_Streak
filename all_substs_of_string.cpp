#include<bits/stdc++.h>

using namespace std;
void print_subset(string S, int index, int len, string res)
{   
     if(len==0)
       {
         cout<<res<<" ";
         return;
       }
    print_subset(S, index+1, len-1, res);
    print_subset(S, index+1, len-1, res+S[index]);
    
}
int main()
{
    string S = "Rahul";
    print_subset(S,0, S.length(), "");
    return 0;
}