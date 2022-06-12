#include<iostream>
#define ll long long int
using namespace std;

class node
{  public:
    ll val;
    node *next;
    node *prev;
};
node *head=NULL;                                 //doubly link list for stack middle element deletion...... to  adjust the middle element during 
                                                //pushing and poping we need to move the middle element to right as awell as left so doubly link list is needed..
node *middle=NULL;
int c=0;
void insert(ll val)
{
    if(head==NULL)
    {   
        head=new node();
        head->val=val;
        head->prev=NULL;
        head->next=NULL;
        middle=head;
        c=1;
    }

    else
    {  c++;
       node* temp=new node();
       temp->val=val;
       temp->next=head;
       head->prev=temp;
       head=temp;
       temp=NULL; 
       if(c%2==1)
       middle=middle->prev;
       delete temp;
       temp=NULL;
    }
}
 void show()
 {   
     node *temp=head;
   while(temp != NULL)
      {cout<<temp->val<<"\n";
        temp=temp->next;}
        temp=NULL;
 }

void pop()
{   c--;
    node *temp=head;
    head=head->next;
    delete temp;
    temp=NULL;
    if(c%2==0)
     middle=middle->next;
}

void middlee()
{
  cout<<"the middle numbe is  "<<middle->val;
}

void deletemidlee()
{     c--;
    node* temp=middle->next;
    middle->next=NULL;
    middle=middle->prev;
    delete middle->next;
    middle->next=temp;
    if(c%2==0)
    middle=middle->next;
    cout<<"the new middle is "<<middle->val;
}

int main()
{   ll x=1;
    while(x)
    {  ll val;
        cin>>val;
        insert(val);
        cin>>x;
    }
    
    pop();
    show();
    middlee();
    deletemidlee();
    return 0;
}