#include<iostream>
#include <bits/stdc++.h>
#define ll long long int
#include<algorithm>
#include <stack> 

using namespace std;

 
class node
{  public:
    int data ;
    node* left=NULL;
    node* right=NULL;
};
node* root=NULL;

int findheight(node* root)
{ if(root==NULL)
   return 0;
  int rdepth=findheight(root->right)+1;
  int ldepth=findheight(root->left)+1;

  return(max(rdepth,ldepth));
}

int findmax(node* root)
{   
   while(root->right!=NULL)
     root=root->right;
    
    return root->data; 
}

node* findndelete(int data, node* root)
{   
   if(root->data < data)
     root->right=findndelete( data, root->right);
   else if(root->data >data)  
     root->left=findndelete(data, root->left);

     else
     {  if(root->left==NULL && root->right==NULL)
           {
             delete root;
             return NULL;
           }
     else if(root->left!=NULL && root->right!=NULL)
       {
       int max= findmax(root->left);
       cout<<max;
        root->data= max;
        root->left=findndelete(max, root->left);}

      else
       { 
         node* temp=root;
         root=root->left;
         delete(temp);
         return root;
       }

     }
     return root;
}

void showrecursive(node* ptr)
{
  if(ptr==NULL)
   return;
   
   showrecursive(ptr->left);
   cout<<ptr->data<<" ";
   showrecursive(ptr->right);
   
}
void showiterative(node* root)
{   stack <node*> s;
    s.push(root);
    root=root->left;
   while(!s.empty() || root!=NULL)
    {if(root!=NULL)
       { s.push(root);
       //cout<<s.top()->data<<" ";
         root=root->left;
         
        //cout<<"rahul";
        }
     else{
       //cout<<"keshaw";
      // cout<<s.top()->data<<" ";
       root=s.top()->right;
       s.pop();
        }  
    }
}
void find(int data){

    node*  temp=root;
    while(temp!=NULL)
    {
        if(temp->data < data)
         temp=temp-> right;
         else if(temp->data > data)
         temp=temp->left;
         else
          {cout<<temp->data<<"  found\n";
           return;
          }
    }
    cout<<" not found\n";
}

void insert(int data)
{
  if(root==NULL)
  { root=new node();
    root->data= data;
      return;
  }
  node* temp= root;
  node* holder=new node();
  holder->data= data;
  while(temp!=NULL)
  {
      if(temp->data < data)
       {   if(temp-> right!=NULL)
             temp=temp->right;
             else
             {temp->right=holder;
               temp=NULL;
               holder=NULL;}
       }
      else 
       { if( temp-> left!=NULL)
             temp=temp->left;
             else
             {temp->left=holder;
               temp=NULL;
               holder=NULL;} 
       }       
  }
}
int main()
{   
    insert(5);
    insert(7);
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(6);
      
    //findndelete(5,root);     
    //showrecursive(root);
    //cout<<"\n";
    //showiterative(root);
    //cout<<"\n";
    //int x= findheight(root);
    //cout<<x;
    
    return 0;
}