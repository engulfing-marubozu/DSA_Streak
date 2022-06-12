#include <iostream>
#define ll long long int
using namespace std;



int main() {
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll r,c,p=0,o=1;
        double u;
        double sum=0;
        cin>>r>>c>>u;
        double arr[r+1][c+1]={};
        for(int i=1; i<r+1; i++)
          for(int j=1; j<c+1; j++)
            {cin>>arr[i][j];
               if(arr[i][j]>=u)
                p++;
                arr[i][j]=arr[i][j] + arr[i][j-1] + arr[i-1][j] - arr[i-1][j-1];
            }

            // for(int i=1; i<r+1; i++)
            //   {for(int j=1; j<c+1; j++)
            //      cout<<arr[i][j]<<" ";
            //      cout<<"\n";
            //      }
    
for(int i=1; i<r; i++)
  for(int j=1; j<c && i+1<r+1 && j+1<c+1; j++)
		{  ll k=i+1,l=j+1;
			 //double sum=0;
			  ll ri,rj;
            if(r-i+j <=c)
              {ri=r;
              rj=r-i+j;}
            else 
              {ri=c-j+i;
              rj=c;} 
              
     sum=(arr[ri][rj]-arr[i-1][rj]- arr[ri][j-1] + arr[i-1][j-1])/((ri-i+1)*(ri-i+1));
    if(sum<u)
        continue ;
        
     sum= (arr[k][l]-arr[i-1][l]- arr[k][j-1] + arr[i-1][j-1])/((k-i+1)*(k-i+1)); 
    if(sum>=u)
                  {
                          
                  }  
     
     else
     
  { bool y=true;
  while (k <= ri && l<=rj) {
        
    //cout<<"rahul"<<"\n";
       
        ll mi = k + (ri - k) / 2;
        ll mj = l + (rj - l) / 2;
         sum= (arr[mi][mj] - arr[i-1][mj] - arr[mi][j-1] + arr[i-1][j-1])/((mi-i+1)*(mi-i+1));
        if (sum==u)
            {  
              while(sum==u && mi>=k && mj>=l)
              {   //cout<<"stuck1 "<<sum<<"\n";
                  mi--;
                  mj--;
                  sum= (arr[mi][mj] - arr[i-1][mj] - arr[mi][j-1] + arr[i-1][j-1])/((mi-i+1)*(mi-i+1));
              }                          
             k=mi+1;
             l=mj+1;
             sum= (arr[k][l] - arr[i-1][l] - arr[k][j-1] + arr[i-1][j-1])/((k-i+1)*(k-i+1));
             y=false;
             break;
            }
  
        else if (sum<u)
            {k = mi + 1;
            //cout<<"stuck2  "<<sum<<"\n";

             l= mj+ 1;}
             
  
        else
            { ri = mi - 1;
            //cout<<"stuck3  "<<sum<<"\n";
              rj= mj-1;}

              
         }
         double x=(arr[ri][rj]-arr[i-1][rj]- arr[ri][j-1] + arr[i-1][j-1])/((rj-j+1)*(rj-j+1));
                 if(x>u && y)
                  { sum=x;
                  //cout<<"stuck4"<<"\n";
                  k=ri; l=rj;}
       }          
         
        //if(min(r-k+1, c-l+1)==1)
         //cout<<o++<<"-> "<<i-1<<","<<j-1<<"  "<<k-1<<","<<l-1<<"   sum= "<<sum<<"    vlaue= "<<min(r-k+1, c-l+1)<<"\n";
         p+=min(r-k+1, c-l+1);

			     
			 }

         
      
        //cout<<"------------------------------------------------------------------------"<<"\n";
        cout<<p<<"\n";
        //cout<<"------------------------------------------------------------------------"<<"\n";
    } 

	return 0;
}


// 1
// 3 3 3
// 2 2 3
// 3 4 5
// 4 5 5

// 5 5 10
// 1 2 3 4 5 
// 5 6 7 8 9
// 10 11 12 13 14
// 14 15 16 17 18
// 15 16 17 18 19