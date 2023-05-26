#include<iostream>
using namespace std;

void reversePrint(string s)
{   
     if(s=="")
      return;
     char ch = s[0];
     s.erase(0, 1);
         cout<<ch;
    reversePrint(s);

}
int main()
{
    string s = "binod";
       reversePrint(s);
    return 0;
}