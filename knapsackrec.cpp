#include<iostream>
#include<math.h>
#define ll long long int;
using namespace std;
int rupee[]={0,4,5,3,2}, mango_utilities[]={0,8,2,5,9};


int arr(int i, int j)
{   
    if(i==0||j==0)
     return 0;
//     if(j<0)
//       return INT16_MIN; 
    
    int x;
            if(rupee[i]>j)
             x =arr(i-1,j);
            else
             x=max(arr(i-1,j) , mango_utilities[i]+arr(i-1,j-rupee[i]) );

    return x;
}

int  main()
{   
    
int x=arr(4,10);    
cout<< x;
        return 0;
}
