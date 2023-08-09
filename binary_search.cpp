#include<bits/stdc++.h>
using namespace std;

int main()
{
  int b_arr[10]={1,2,3,5,6,7,8,8,10};
bool x=true;
  while(x)
  {
    int to_find ;
    cin>>to_find;
    int high=  8;
    int low = 0;
    while(high>low)
    {
      int mid = (high+low)/2;
      if(b_arr[mid]<to_find)
       low= mid+1;
     else 
       high=mid;

       if(b_arr[mid]==to_find)
         break;
    }
    if(b_arr[high]==to_find)
    cout<<"\ncontains\n";
    else
    cout<<"\ndoes not contain\n";
    cin>>x;
  }

  return 0;
}