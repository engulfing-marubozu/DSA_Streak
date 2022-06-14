#include<bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int y)
    {
       data=y;
       left = NULL;
       right = NULL;
    }
};


void insert_into_bst(int data , Node* &head )
{  
     if(!head)
       {head =  new Node(data);
  //     cout<<"land";
       return;}
   Node* temp = head;
   Node* store =NULL;
   bool x = true;
   //cout<<"bc";
       while(temp)
       {       
            //     cout<<"sjhvjdh";
                if(temp->data > data)
                   { 
                    store= temp;
                    temp=temp->left;
                    x = false;}
                else
                  {
                    store= temp;
                  temp=temp->right;
                  x =true;}   
            
       }
        // cout<<"bcc";
        // cout<<store<<" ";
      if(x)
        store->right = new Node(data);
        else
        store->left = new Node(data);
        
       temp= NULL;
       store = NULL;

}
void show_postorder_bst(Node* head)
{  //  cout<<"hello";
    if(!head)
      return ;
  
    show_postorder_bst(head->left);
    show_postorder_bst(head->right);
    cout<<head->data<<" ";
    return;
}

void show_preorder_bst(Node* head)
{  //  cout<<"hello";
    if(!head)
      return ;
    cout<<head->data<<" ";
    show_preorder_bst(head->left);
    show_preorder_bst(head->right);

    return;
}


void show_inorder_bst(Node* head)
{  //  cout<<"hello";
    if(!head)
      return ;
 
    show_inorder_bst(head->left);
       cout<<head->data<<" ";
    show_inorder_bst(head->right);

    return;
}


int main()
{   
   int x= 1;
    Node* head = NULL;
   while(x){
    int num;
    cin>>num;
    insert_into_bst(num, head);
 
    cin>>x;
   }
    show_preorder_bst(head);
   show_inorder_bst(head);
     show_postorder_bst(head);
  
   
    return 0;
}