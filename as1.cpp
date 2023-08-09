#include<bits/stdc++.h>

using namespace std;


int main()
{
    
    int arr[] = {1,4,5,7,9,10,23,45,60};
        int high = 8;
        int low = 0;

        int mid ;
    int to_find ;
    cout<<"please enter the numbeer to be searched \n";
    cin>>to_find;
        while(high>low)
        {
              mid = (high+low)/2;
              if(arr[mid]<to_find)
                 low = mid+1;
                 else
                 high = mid;
        }

        if(arr[high]==to_find)
        {
           cout<<"Number found at index "<<high<<endl;
        }
        else
        cout<<"Not found";
    return 0;
}