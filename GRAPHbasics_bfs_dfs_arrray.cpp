#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void show(vector<int> vect[])
{
    for(int i=0; i<7; i++)
      {
          cout<<i<< " -> ";
          for(int j=0; j<vect[i].size(); j++)
            cout<< vect[i][j]<<" ";
            cout<<endl;
      }    
}

void bfs_show(vector<int> vect[], vector<bool> &validate)
{   
   queue<int> q;
   q.push(1);
   validate[1]=true;
  while(!q.empty())
   {
       for(int i=0; i<vect[q.front()].size(); i++)
         {    if(validate[vect[q.front()][i] ]==false)
                 { q.push(vect[q.front()][i]);
                    validate[vect[q.front()][i]]=true;}
 
         }
         cout<<q.front()<<" ";
         q.pop();

    }
    cout<<endl;
}

void dfs_show(int data, vector<int> vect[], vector<bool> &validatee)
{      cout<<data<<" ";
       validatee[data]=true;
    for(int i=0; i<vect[data].size(); i++)
    {      
        if(validatee[vect[data][i]]==false)
          dfs_show(vect[data][i], vect, validatee);
    }
     
}  

void addedge( vector<int> vect[], int i, int j, bool bidir)
{
    vect[i].push_back(j);
    if(bidir)
          vect[j].push_back(i);
        
}

int main()
{   
    vector<int> vect[7];
    vector<bool> validate(7,false);
    vector<bool> validatee(7,false);
    addedge(vect,1,2, false);
    addedge(vect,1,5 ,false);
    addedge(vect,1,4, true);
    addedge(vect,2,3, true);
    addedge(vect,3,6,false);
    addedge(vect,3,1, false);
    addedge(vect,5,2,false);
    show(vect);
    bfs_show(vect,validate);
    dfs_show(1, vect, validatee);
    return 0;
}