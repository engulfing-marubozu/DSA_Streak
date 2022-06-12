#include<iostream>
#include <bits/stdc++.h>
#define ll long long int
#include<algorithm>
using namespace std;

void print_subset(int arr[10], int index,int num, vector<int> res, int &ans)
{   
    if(index==11)
     return ;
      
   if(num==5)
     {  int sum=0;
               for(int i=0; i<5; i++)
                  {cout<<res[i]<<" ";
                   sum+=res[i];}
                  cout <<" sum= "<< abs(55-2*sum)<<endl;
                  ans=min(ans, abs( 55- 2*sum));
                  return;
     }
    print_subset(arr, index+1, num, res,ans );
    res.push_back(arr[index]);
    print_subset(arr, index+1, num+1, res, ans);
}
int main()
{ vector<int> res;
  int ans=INT_MAX;
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
   print_subset(arr, 0,0 , res,ans);
   cout<<"the final tug of war teams  differences is  " << ans;
  return 0;
}