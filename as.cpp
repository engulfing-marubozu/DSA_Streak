#include<bits/stdc++.h>

using namespace std;

void bfs_show(int base, vector<int> vect[], vector<bool> &validate, vector<int> &temp )
{   
   queue<int> q;
   q.push(base);
   validate[base]=true;
   int  c=0;
  while(!q.empty())
   {
      c++;
       for(int i=0; i<vect[q.front()].size(); i++)
         {    if(validate[vect[q.front()][i] ]==false)
                 {
                 //   cout<<"hello "<<c<<endl;

                      temp[vect[q.front()][i]]=c;
                     q.push(vect[q.front()][i]);
                    validate[vect[q.front()][i]]=true;}
 
         }
         
         q.pop();

    }
   
}
long maxBeauty(int tree_nodes, vector<int> &tree_from,  vector<int> &tree_to ,  vector<int> &a )
{
  vector<int> adj[tree_nodes+1];
  int size=tree_from.size();
  for(int i=0; i<size; i++)
   adj[tree_from[i]].push_back(tree_to[i]);
  long long int res = INT_MIN;

    for(int i=1; i<=tree_nodes; i++)
       {
              vector<int> temp(tree_nodes+1, 0);
                   vector<bool> validate(tree_nodes+1,false);
                  bfs_show(1, adj, validate, temp);

                  long long int x =0;
                //   for(auto it: a)
                //     cout<<it<<" ";
                //     cout<<endl;
                  for(int j=1; j<=tree_nodes; j++)
                    if(j!=i)
                      x += temp[j]*a[j-1];
                     //  cout<<x<<endl;
                      res=max(res, x);
       }

return res;
}

int main()
{
  int tree_nodes  = 3, tree_edges=2;
  vector<int> tree_from = {1,2};
  vector<int> tree_to = {2,3};
  vector<int> a = {3,2,3};

  cout<<maxBeauty(tree_nodes, tree_from, tree_to, a);

}