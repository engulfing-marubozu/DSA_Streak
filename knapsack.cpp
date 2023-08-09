#include<iostream>
#include<math.h>
#define ll long long int;
using namespace std;

int  main()
{ 
 int rupee[]={0,4,5,3,2}, mango_utilities[]={0,8,2,5,9};
    int arr[5][11]={0};
    
    for(int i=1; i<5; i++)
    {
        for(int j=0; j<11; j++)
        {
            if(rupee[i]>j)
             arr[i][j]=arr[i-1][j];
            else
             arr[i][j]=max(arr[i-1][j] , mango_utilities[i]+arr[i-1][j-rupee[i]]); 
        }
    }
    for(int i=1; i<5; i++)
    {
        for(int j=0; j<11; j++)
        { cout<<arr[i][j]<<" ";}
        cout<<"\n";}
    
cout<< arr[4][10];
        return 0;
}
