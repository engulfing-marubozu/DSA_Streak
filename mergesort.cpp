#include<iostream>
using namespace std;
int p=0;

void join(int arr[], int left, int mid, int right)
{ int b[right+1];
  int i=left,j=mid+1, k=left;
  while(i<=mid && j<=right)
  {
     if(arr[i]<arr[j])
      b[k++]=arr[i++];
      else 
      {b[k++]=arr[j++];
        p+=mid-i+1;}
                                                     // also counts inversions in a merge sort............ module 3 
  }
    while(i<=mid)
    b[k++]=arr[i++];
    while(j<=mid);
    b[k++]=arr[j++];
    for(int j=left; j<=right; j++)
     arr[j]=b[j];
}

void merge(int arr[],int right, int left )
{  
  if(left<right)
  {  int mid=(right+left)/2;
     merge(arr,mid,left);
     merge(arr,right,mid+1);
     join(arr,left,mid,right);
  }
}


int main()
{  int m[3]={3, 1, 2};
   merge(m,2,0);
   for(int i=0; i<4; i++)
    cout<<m[i]<<" ";
    cout<<"\n"<<p;
   return 0;
}