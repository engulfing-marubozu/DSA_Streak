#include<bits/stdc++.h>

using namespace std;
bool x(int a, int b)
 {
    return b>a;
 }
int main()
{
    int arr[] = {1,4,6,7,8,54,6,8,9};
    sort(arr, arr+8, greater<int>());
    for(auto val: arr)
      cout<<val<<" ";
      cout<<endl;
    return 0;
}