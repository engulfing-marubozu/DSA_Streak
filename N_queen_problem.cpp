#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> res;
bool is_possible(int n,int i, int j, vector<vector<bool>> &tracker)
{    int res=true;
        for(int k=0; k<n ; k++ )
            if(!tracker[k][j])
              res=false;
              if(!res)
               return res;
               
         for(int k=0; k<n ; k++ )
            if(!tracker[i][k])
              res=false;
                if(!res)
               return res;
               
           for(int k=i, l=j; k<n && l<n ; k++, l++ )
            if(!tracker[k][l])
              res=false;
                if(!res)
               return res; 
               
           for(int k=i, l=j; k>=0 && l<n ; k--, l++ )
            if(!tracker[k][l])
              res=false;
              if(!res)
               return res;
             for(int k=i, l=j; k>=0 && l>=0 ; k--, l-- )
            if(!tracker[k][l])
              res=false;
              if(!res)
               return res;
             for(int k=i, l=j; k<n && l>=0 ; k++, l-- )
            if(!tracker[k][l])
              res=false;
            
               return res;          
                    
}
     void helper(int n, int j, vector<vector<bool>> &tracker, vector<int> &carrier)
{  
    
    if(j==n)
      {
            res.push_back(carrier);
            return;
      }
      
     for(int i=0; i<n; i++)
     {  
         if(is_possible(n,i,j,tracker))
          {     tracker[i][j]=false;
            
              carrier.push_back(i+1);
                helper(n,j+1, tracker, carrier);
        
                carrier.pop_back();
             tracker[i][j]=true;
          }
     }
}
    vector<vector<int>> nQueen(int n) {
         vector<vector<bool>> tracker(n, vector<bool> (n,true));
         vector<int> carrier;
          helper(n,0, tracker, carrier);
          sort(res.begin(), res.end());
          return res;
    }

    int main()
    {int n;
        cout<<"enter the size of the chessbpard\n";
        cin>>n;
       vector<vector<int>> result= nQueen(n);

       for(auto it1 : result)
         {
            for(auto it2:it1)
              cout<<it2<<" ";
              cout<<endl;
         }

    }