#include<iostream>
#include <vector>
#include<string>
 using namespace std;

 class node
 {
     public:
       int a;
       node *next=NULL;
    
 };
 node *head=NULL;
 node *tail=NULL;
 node *middle=NULL;
 int c;

 void insert(int val)
 {   if(head==NULL)
      {head=new node();
       head->a=val;
       head->next=NULL;
       tail=head;  
       middle=head;
       c=1;  }
      else
     {node *t= new node();
      c++;
     t->a=val;
     tail->next=t;
     tail=t;
     if(c%2==1)
     middle=middle->next;
     }
    
 }

 void show()
 {   
     node *temp=head;
   while(temp != NULL)
      {cout<<temp->a<<" ";
        temp=temp->next;}
        cout<<"\n";
 }
 void popfromfront()
 {  c--;
   node *temp=head;
   head=head->next;
   delete temp;
   if(c%2==1)
   middle=middle->next;

   
 }       

 void showmiddle()
 {
   if(head==NULL)
     cout<<"no element in queue";
     else
     cout<<"the middle element is "<<middle->a;
 } 


 void  popfromendandaddatlast()
 {
   node *first= head;
   node *second =head;
   if(first->next== NULL)
   cout<<"mello";
   while(first->next!= NULL)
   {  
       second =first;
       first=first->next;
     
  }

   second->next=NULL;
   first->next=head;
   head=first;
   first=NULL;
   second=NULL;
  
}
 
void reverse()
{
  //  if(head==NULL || head->next==NULL)
  //           return
          
          node *current=head;
          node *nexT=head->next;
          node *nexTest=NULL;
          
          while(nexT->next!=NULL)
          {   cout<<"rahul"<<"\n";
              nexTest=nexT->next;
              nexT->next=NULL;
              nexT->next=current;
              current=nexT;
              nexT=nexTest;
              nexTest=NULL;
        
          }
          
         nexT->next=current;
         head->next=NULL;
         head=nexT;
         current=NULL;
         nexT=NULL;
}

 int main()
 {    int x=1;
   
    while(x)
    {
        int val;
        cin>>val;
        insert(val);
        cin>>x;
    }
     
    //  popfromfront();
      cout<<"\n";
    //  show();
    //  showmiddle();
    // popfromendandaddatlast();
     //reverse();
     show();
      return 0;  
 }
