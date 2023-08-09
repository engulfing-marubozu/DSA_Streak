#include<iostream>

using namespace std;

int main(){

int n;
cin>> n;

int arr[n];
for(int i=0; i<n; i++){
cin >> arr[i];
}

int sum=0;

int b=0;
for(int i=b; i<n; i++){                              // 1 1 2 1 2 1 3 2  

   int y=0;
   for(int j=n-1; j>i; j--){

         if(arr[i]== arr[j]){
                         y=y+1; }
         else{
               b=j-1;  }
    }
    y=y/2;
    sum=sum+y;

      i=b;
}

cout<< sum;
return 0;
}