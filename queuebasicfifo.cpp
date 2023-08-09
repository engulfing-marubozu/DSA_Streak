
#include<iostream>
#define ll long long int
using namespace std;
int push(ll arr[], ll &top, ll &bottom)
{
  if(top==9)
  {cout<<"sorry already full"<<"\n";
    return 0;}

    if(top==-1)
     bottom++;
    ll value;
    cout<<"enter the value to be pushed"<<"\n";
    cin>>value;
    top++;
    arr[top]=value;
    return 0;
}

int pop(ll arr[], ll &top, ll &bottom)
{
   if(bottom==-1)
   cout<<"no data to be poped"<<"\n";
   else 
   bottom++;
   if(bottom>top)
    {bottom=-1;
    top=-1;}
   return 0;
}

int view(ll arr[], ll top,ll bottom)
{    
    for(ll i=bottom; i<=top; i++)
       cout<<arr[i]<<"\n";
       return 0;
}




int main()
{   ll x=1;
    ll choice;
    ll arr[10],top=-1,bottom=-1;
    
    while(x)
    {
        cout<<"press 1 to push, 2 to pop and 3 to view\n";
        cin>>choice;
        if(choice ==1)
        push(arr,top,bottom);
        if(choice==2)
        pop(arr,top,bottom);
        if(choice==3)
        view(arr,top,bottom);

        cout<<"press 1 to continue else 0 to exit"<<"\n";
        cin>>x;
    }
    cout<<"thanks";
    return 0;
}