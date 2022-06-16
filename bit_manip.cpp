#include<bits/stdc++.h>

using namespace std;

int main()
{   

    int x =5|0;
    int y =5^0;
    char o = 'A' | 1<<5;  // set any ith bit 
    char p = 'a' & ~(1<<5);  // unset any ith bit
    cout<<x<<" "<<y<<" "<<o<<" "<<p;
    return 0;
}