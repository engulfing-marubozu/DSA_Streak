#include <bits/stdc++.h>
#include<map>
 using namespace std;

 void word_finder(char arr[][5], int n, string target, int r, int c, int index, int &y )
 {     
   if(index == target.length()-1 && arr[r][c]==target[index])
   { y++;
     cout<<"index ->"<<r<<","<<c<<endl;
     return ;}
   if(arr[r][c]!=target[index])return ;
   if(r>n-1 || r<0 || c>n-1 || c<0)  return;
      //cout<<target[index]<<" ";6
     int row[4]={-1, 0, 1, 0};
     int col[4]={0, 1, 0, -1};
     bool ans=false;
    
     arr[r][c]='$';
     for(int p=0; p<4; p++)
     {
        word_finder(arr, n, target, r+row[p], c+col[p], index+1,y)   ;
      
     }
     arr[r][c]=target[index];
     
   
  
 }
 int main()
 {  int y=0;
   char arr[5][5]={ {'a','n','c','d','f'},
    {'r','k','a','r','a'},
    {'a','h','h','a','h'},
    {'o','n','u','l','u'},
    {'p','q','l','l','l'}
   };
   string target="rahul";
   //bool ans;
   for(int i=0; i<5; i++)
     for(int j=0; j<5; j++)
     {   
       if(arr[i][j]==target[0])
         {  // cout<<i<<" "<<j<<endl;
          word_finder(arr, 5, target, i,j, 0, y);
              
         }}
        
      if(y)
      cout<<"found "<<y<<" times";
      else
      cout<<"not found";
      return 0;
 }