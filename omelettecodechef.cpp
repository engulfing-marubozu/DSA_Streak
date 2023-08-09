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
	{   long long int arrx[19],arry[19];
	    long long int n,e,h,a,b,c,min=LLONG_MAX;
	    cin>>n>>e>>h>>a>>b>>c;
        
	    arrx[0]=0;  arry[0]=n; 
        arrx[1]=n;  arry[1]=0; 
        arrx[2]=(long long int)e/2;  arry[2]=n-arrx[2]; 
        arrx[3]= n-h/3; arry[3]= h/3;
        arrx[4]=n-(h/3);  arry[4]=h/3; 
        arrx[5]=0;  arry[5]=0; 
        arrx[6]=0;  arry[6]=h/3; 
        arrx[7]=0;  arry[7]=(h-n)/2; 
        arrx[8]=(long long int)e/2;  arry[8]=0; 
        arrx[9]=n-h;  arry[9]=0; 
        arrx[10]=2*(h/3)+n-h;  arry[10]=h/3; 
        arrx[11]=e/2;  arry[11]=n-(e/2); 
        arrx[12]=0;  arry[12]=n-e; 
        arrx[13]=e-n;  arry[13]=0; 
        arrx[14]=e/2;  arry[14]=arrx[14]+n-e; 
        arrx[15]=h/3-n+e;  arry[15]= h/3; 
        arrx[16]=2*e+h-3*n;  arry[16]=e+h-2*n; 
        arrx[17]=e/2;  arry[17]=h/3; 
        arrx[18]=e/2;  arry[18]=((1+(e/2)))/2; 
    for(int j=0; j<19; j++)
    {    long long int possible;
        if(ispossible(arrx[j],arry[j],n,e,h) )
        {    
             possible= arrx[j]*a + arry[j]*b + (n- arrx[j]- arry[j])*c;
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
