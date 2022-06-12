#include <iostream>
#include <bits/stdc++.h>
#include<map>
using namespace std;
#define ll long long int
void addedge(map<int , list< pair<int, int> > > &mapp, int i, int j, int wt , bool bidir)
{
	mapp[i].push_back(make_pair(j,wt));
	if(bidir) 
	  mapp[j].push_back(make_pair(i,wt));
	 
}

dfs_helper(int data, map<int, list<pair<int, int>>> mapp, map<int, bool> &validatee)
{        cout<<data<<" ";
         
         validatee[data]=true;
      for(auto it: mapp[data])
	  {
		  if(!validatee[it.first])
		    dfs_helper(it.first,mapp, validatee);
	  }
}
dfs_show(map <int, list<pair<int, int>>> mapp)
{
    map<int , bool> validatee;
	
	dfs_helper(  mapp.begin()->first  ,mapp, validatee);
}
void findconnected(map<int, list<pair<int, int>>> mapp)
{    int count=0;
	map<int, bool> visited;
	for(auto it: mapp)
	{
		if(!visited[it.first])
		  {dfs_helper( it.first, mapp, visited);
             count++;}
	}
	cout<<"the number of sub-graphs of the figure is "<< count<<endl;
}
bfs_show(map<int, list<pair<int, int>>>  mapp)
{    map<int, bool> validate;
     queue<int> q;
	 auto it=mapp.begin();
	 q.push(it->first);
	 validate[it->first]=true;
	 while (!q.empty())
	 {
        for(auto ite: mapp[q.front()])    
		{     
			if(validate[ite.first]==false)
			  {q.push(ite.first);
			   validate[ite.first]=true;}
		}
		cout<<q.front()<<" ";
		q.pop();

	 }
	 cout<<endl;
	 
}
void show(map <int , list<pair<int, int>> > mapp)
  {
	for(auto it: mapp)
	{
	   cout<<it.first<<" ->  ";
	   for(auto ite: it.second)
	     cout<<"("<<ite.first<<","<<ite.second<<") ";
        cout<<"\n";
	}
	
}

void dijkstra(map<int , list< pair<int, int> > > mapp, int size)
{   set <pair<int, int>> s;
	vector <int> distance(size+1, INT_MAX);
	vector<bool> visited(size+1,true);
	visited[1]=false;
	distance[1]=0;

	   for(auto it: mapp[1])
	      {distance[it.first]=it.second;
		   s.insert(make_pair(it.second, it.first));  
		   }
		   
 
	while(!s.empty())
	{     auto ite= s.begin();
		  for(auto it: mapp[ite->second])
		  {   if(visited[it.first])
			  {if(distance[it.first] > distance[ite->second] + it.second )
			    {
				     auto del= s.find(make_pair(it.second, it.first));
					   if(del!=s.end())
					   s.erase(del);
					 distance[it.first]=  distance[ite->second] + it.second;
					 s.insert(make_pair( distance[ite->second] + it.second, it.first));
				}
			  }
		  }
          visited[ite->second]=false;
		  s.erase(ite);
	}
  cout<<endl;
    for(int i=0; i<size+1; i++)
	   cout<<" shortest distance from node to "<<i<<" ->  "<< distance[i]<<endl;
}
int main() {
	map<int , list< pair<int, int> > > mapp;
	addedge(mapp,1,2,4, false);
    addedge(mapp,1,8 ,8,false);
    addedge(mapp,2,3,8,false);
    addedge(mapp,2,8,11,false);
    addedge(mapp,8,9,7,false);
    addedge(mapp,3,9,2, false);
    addedge(mapp,9,7,6,false);
    addedge(mapp,8,7,1,false);
	addedge(mapp,3,6,4,false);
	addedge(mapp,7,6,2,false);
	addedge(mapp,3,4,7,false);
	addedge(mapp,4,6,14,false);
	addedge(mapp,4,5,9,false);
	addedge(mapp,6,5,10,false);
	findconnected(mapp);
    show(mapp);
	bfs_show(mapp);
	dfs_show(mapp);	
	dijkstra(mapp,9);
	return 0;
}
