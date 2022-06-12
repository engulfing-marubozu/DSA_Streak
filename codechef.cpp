#include <bits/stdc++.h>
#include<stdlib.h>
using namespace std;
 bool ispossible(long long int x, long long int y, long long int n, long long int e, long long int h)
 {
    if( (x-y<=e-n) && (x+y<=n) && x>=0 && y>=0 && x<=(int)e/2 && y<=(int)h/3 && 2*y-x<=h-n &&(n-x-y>= 6*n-3*e-2*h) )
      return true;
      else 
      return false;
 }
int main() {
    int a;
    cin>>a;
	for(long int j=0; j<a; j++)                   //&& (n-x-y>= 6*n-3*e-2*h)
	{   
	    long long int n,e,h,a,b,c,min=LLONG_MAX;
	    cin>>n>>e>>h>>a>>b>>c;
        
	      long long int  points[19][2];
        points[0][1]=e+h-(2*n);
        points[0][0]=e-n+points[0][1];
        points[1][0]=e/2;
        points[1][1]=n-points[1][0];
        points[2][0]=0;
        points[2][1]=n-e;
        points[3][1]=0;
        points[3][0]=e-n;
        points[4][0]=e/2;
        points[4][1]=points[4][0]+n-e;
        points[5][1]=h/3;
        points[5][0]=e-n+points[5][1];
        points[6][1]=h/3;
        points[6][0]=n-points[6][1];
        points[7][0]=0;
        points[7][1]=(h-n)/2;
        points[8][1]=0;
        points[8][0]=n-h;
        points[9][0]=e/2;
        points[9][1]=(h-n+points[9][0])/2;
        points[10][1]=h/3;
        points[10][0]=(2*points[10][1])+n-h;
        points[11][0]=0;
        points[11][1]=n;
        points[12][1]=0;
        points[12][0]=n;
        points[13][0]=e/2;
        points[13][1]=n-points[13][0];
        points[14][1]=h/3;
        points[14][0]=n-points[14][1];
        points[15][0]=0;
        points[15][1]=0;
        points[16][0]=0;
        points[16][1]=h/3;
        points[17][0]=e/2;
        points[17][1]=0;
        points[18][0]=e/2;
        points[18][1]=h/3;
    for(int j=0; j<19; j++)
    {    long long int possible;
        if(ispossible(points[j][0],points[j][1],n,e,h) )
        {    
             possible= points[j][0]*a + points[j][1]*b + (n- points[j][0]- points[j][1])*c;
             if(possible<min)
             min=possible;
             
        }}
        
    if(min!=LLONG_MAX)    
  cout<< min<<"\n";
   else 
   cout<<"-1"<<"\n";
        
	    
    }
	return 0;
}
