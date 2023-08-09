#include<iostream>
#include<algorithm>
using namespace std;
int main() 
{ int side,upper,sidevalue,uppervalue,n=5,max=0,p;
int mat[n][n] = { 
                { 1, 2, -1, -4, -20 }, 
                { 5, -3, 4, 2, 1 }, 
                { 3, 8, 6, 1, 3 }, 
                { -4, -1, 1, 7, -6 }, 
                { 0, -4, 10, -5, 1 } 
            }; 
    for(int i=0; i<n; i++)
    {
      for(int j=0; j<n; j++)
      { side=i-1;
        upper=j-1;
        if(side<0||upper<0)
        {if(side<0)
        sidevalue=1000000;
        if(upper<0)
        uppervalue=1000000;}
        else
        uppervalue=mat[i][upper];
        sidevalue=mat[side][j];
        p=min(mat[i][j],min(sidevalue,uppervalue));
        if(i>0 && j>0)
        {
          if((mat[i][j]-mat[i-1][j-1])>max)
           max=mat[i][j]-mat[i-1][j-1];
        }
        mat[i][j]=p;
        cout<<mat[i][j]<<" ";
        

      } cout<<"\n";
    }
    cout<<max;
    return 0; 
} 