#include<iostream>
#include <algorithm> 
using namespace std;
int main()
{int testcases,r,c;
 cin>>testcases;
 for(int k=0; k<testcases; k++)
 {
   cin>>r>>c;
   int arr[r+2][c+2]={};
                                                                      for(int p=1; p<=r; p++)
                                                                            for(int h=1; h<=c; h++)
                                                                                cin>>arr[p][h];
                                                                      // for(int p=0; p<=r+1; p++)
                                                                      //       {for(int h=0; h<=c+1; h++)
                                                                      //           cout<<arr[p][h];
                                                                      //           cout<<"\n";         } 
   int answer=0;                                                                   
   for(int i=1; i<=r; i++)

   {
       for(int j=1; j<=c; j++)
       {    //cout<<"hello"<<"\n";
           if(arr[i][j]==1)
           {  // cout<<"rahul"<<"\n";
             if(arr[i][j-1]==1 && arr[i+1][j]==1)
               {
                 int right=i,vertical=0,horizontal=0;
                 int upper=j;
                 while(arr[right][upper]!=0)
                  {
                    vertical++;
                    upper--;
                  }
                  upper=j;
                  while(arr[right][upper]!=0)
                  {
                    horizontal++;
                    right++;
                  }
                 int mini=min(vertical,horizontal) ;
                 int maxi= max(vertical,horizontal);
                 answer+=max((mini/2)-1,0) + min(mini,maxi/2)-1;


               }
              if(arr[i-1][j]==1 && arr[i][j-1]==1)
               {
                 int left=i,vertical=0,horizontal=0;
                 int upper=j;
                 while(arr[left][upper]!=0)
                  {
                    vertical++;
                    upper--;
                  }
                  upper=j;
                  while(arr[left][upper]!=0)
                  {
                    horizontal++;
                    left--;
                  } int mini=min(vertical,horizontal) ;
                 int maxi= max(vertical,horizontal);
                 answer+=max((mini/2)-1,0) + min(mini,maxi/2)-1;
                 }
                if(arr[i-1][j]==1 && arr[i][j+1]==1)
               {
                 int left=i,vertical=0,horizontal=0;
                 int lower=j;
                 while(arr[left][lower]!=0)
                  {
                    vertical++;
                    lower++;
                  }
                  lower=j;
                  while(arr[left][lower]!=0)
                  {
                    horizontal++;
                    left--;
                  } 
                   int mini=min(vertical,horizontal) ;
                 int maxi= max(vertical,horizontal);
                 answer+=max((mini/2)-1,0) + min(mini,maxi/2)-1;
               }
                if(arr[i+1][j]==1 && arr[i][j+1]==1)
               {
                 int right=i,vertical=0,horizontal=0;
                 int lower=j;
                 while(arr[right][lower]!=0)
                  {
                    vertical++;
                    lower++;
                    //cout<<"fasgaya"<<"\n";
                  }
                  lower=j;
                  while(arr[right][lower]!=0)
                  {
                    horizontal++;
                    right++;
                    //cout<<"jdbqjcswvlkl;dsjvkvnjkebvebve";
                  }  
                   int mini=min(vertical,horizontal) ;
                 int maxi= max(vertical,horizontal);
                 answer+=max((mini/2)-1,0) + min(mini,maxi/2)-1;
               }
               //cout<<answer;
           }
       }
   }

cout<<"Case #"<<k+1<<": "<<answer<<"\n";

 }
  
  return 0;
}