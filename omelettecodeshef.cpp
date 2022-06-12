#include <bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int main() {
    int a;
    cin>>a;
	for(int j=0; j<a; j++)
	{     int w,q,u;
	    long long int n,e,h,a,b,c,min=1000000;
	    cin>>n>>e>>h>>a>>b>>c;
		
	    long long int limitomelette= e/2;
	    long long int limitshake= h/3;
    
	    for(int j=0; j<=limitomelette; j++)
	    {    
	        for(int k=0; k<=limitshake; k++)
	        {   
          long long int limitcake=n-j-k;
        
	            if(limitcake>=0 && (limitcake+2*j)<=e && (limitcake+3*k)<=h)
	             {  
	                 long long int price= a*j + b*k + c*limitcake; 
	                 if(price<min && price>0)
	                   {min=price;
                     
                      w=j;
                      q=k;
                      u=limitcake;}
                     
	             }
	        }  
	    }  if(min!=1000000)
      cout<<min<<" "<<w<<" "<<q<<" "<<u<<"\n";
        else 
        cout<<-1<<"\n";
	}
	return 0;
}
