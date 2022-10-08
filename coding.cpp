#include<bits/stdc++.h>
using namespace std;
 int solve(int k, int n, vector<int> &A, bool can_buy,  int index, map<vector<int>, int> &mapp)
  {   
       if(k==0)
         {  
            return 0;
         }
       if(index == n && can_buy)
         return 0;
        
        if(index==n && !can_buy)
          return -10000;
          int a, b, c;
          vector<int> vect(3, 0);
          if(mapp.find({k, false, index+1})!=mapp.end())
             { 
               // cout<<"rahul\n";
               a=mapp[{k, false, index+1}];
             }
             else
             {
                 a = solve(k, n, A, false, index+1, mapp);
                   vect = {k, false, index+1};
                   mapp[vect]=a;
             }
        if(mapp.find({k, true, index+1})!=mapp.end())
             {
              // cout<<"keshaw\n";
                b=mapp[{k, true, index+1}];
             }
             else
             {
                 b=  solve(k, n, A, true, index+1, mapp );
                  vect = {k, true, index+1};
                      mapp[vect]=b;
             }
          if(mapp.find({k-1, true, index+1})!=mapp.end())  
           { 
           // cout<<"ritik\n";
            c= mapp[{k-1, true, index+1}];
           }
           else
           {
               c = solve(k-1, n, A, true, index+1, mapp);
               vect = {k-1, true, index+1};
                mapp[vect]=c;
           }
       
    
        
         
         if(can_buy)
               return max( -A[index] +a , 0+ b);
           
           else
               return max( A[index] + c , 0+a );
           
  }
    int maxProfit(int k, vector<int>& A) {
         map<vector<int>, int> mapp;
        int n = A.size();
      
       
        int x =solve(k , n, A, true, 0, mapp);
      //   for(auto it: mapp)
      //     cout<<it.first[0]<<' '<<it.first[1]<<" "<<it.first[2]<<endl;
          return x;
    }

int main()
{ int k=4;
   vector<int> A ={1,2,4,2,5,7,2,4,9,0,9};
 cout<< maxProfit(k, A);
 deque<int> dq;
 
   return 0;
}