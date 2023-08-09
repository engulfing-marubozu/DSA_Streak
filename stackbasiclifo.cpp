
#include<iostream>
#define ll long long int
using namespace std;
int push(ll arr[], ll &top)
{
  if(top==9)
  {cout<<"sorry already full";
    return 0;}
    ll value;
    cout<<"enter the value to be pushed";
    cin>>value;
    top++;
    arr[top]=value;
    return 0;
}

int pop(ll arr[], ll &top)
{
   if(top==-1)
   cout<<"no data to be poped";
   else 
   top--;
   return 0;
}

int view(ll arr[], ll top)
{    cout<<top<<"\n";
    for(ll i=0; i<=top; i++)
       cout<<arr[i]<<"\n";
       return 0;
}




int main()
{   ll x=1;
    ll choice;
    ll arr[10],top=-1;
    
    while(x)
    {
        cout<<"press 1 to push, 2 to pop and 3 to view\n";
        cin>>choice;
        if(choice ==1)
        push(arr,top);
        if(choice==2)
        pop(arr,top);
        if(choice==3)
        view(arr,top);

        cout<<"press 1 to continue else 0 to exit";
        cin>>x;
    }
    cout<<"thanks";
    return 0;
}