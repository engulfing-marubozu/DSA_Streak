#include<bits/stdc++.h>

using namespace std;
#define ll long long int
struct Node{
    ll data;
    Node* left;
    Node* right;
    Node(ll x)
    {
      data = x;
      left=NULL;
      right=NULL;
    }
};
Node *root =NULL; 
ll diagonal_max =0;
void insert_tree(ll arr[], ll n)
{ 
   
    queue<Node*> q;
    root = new Node(arr[0]);
     
    q.push(root);
    ll index=1;
   
     while(index<n)
     { 
         Node* temp = q.front();
         temp->left = new Node(arr[index++]);
           if(index>=n)
             break;
         q.push(temp->left);
          temp->right = new Node(arr[index++]);
           
         q.push(temp->right);
         q.pop();
          
     } 
}
void show_tree(Node* root)
{
      if(!root)
       return;

      cout<<root->data<<" ";
      show_tree(root->left);
      show_tree(root->right);

      return;
}
ll  height(Node* root)
 {
    if(!root)
      return 0;

      return 1+ max(height(root->left),height(root->right));
 }
 ll diagonal (Node* root)
 {
      if(!root)
      return 0;
    ll left_h = height(root->left);
    ll right_h = height(root->right);
    diagonal_max = max(1+left_h+right_h, diagonal_max);
      return 1+ max(left_h,right_h);

 }
int main()
{ 
    ll n;
    cin>>n;
    ll arr[n];
    deque<ll> dq;
   
    for(int i=0; i<n; i++)
     cin>>arr[i];
    insert_tree(arr, n);
    show_tree(root);
    cout<<endl;
   cout<< height(root)<<endl;
   diagonal(root);
   cout<<diagonal_max;
    return 0;
   
    
}