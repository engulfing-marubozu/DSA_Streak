#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

// YOU CAN PICK ANY TWO INDEX FORM A STRING(ONLY ONCE) AND REPLACE IT WITH THE SUM OF DIGITS. RETURN THE MAXIMUM POSSIBLE STRNG AFTER THIS OPERATION
//    99999 -> 99917
//    121 -> 31
// 782302 -> 710302



 string  maximumString(string s)
 {
   int replacing_num =-1, replacing_index=-1;
   int size= s.length();
    for(int i=size-2; i>=0; i--)
   {
       int a = s[i] - '0';
       int b = s[i+1]-'0';
        if(a+b>9)
          {
            replacing_num = a+b;
            replacing_index= i;
            break;
          }
   }
if(replacing_num != -1)
   {
    
    s.erase(replacing_index, 2);
    s.insert(replacing_index,to_string(replacing_num));
    return s;
   }
   else
   {
    
     for(int i=0; i<size-1; i++)
   {
       int a = s[i] - '0';
       int b = s[i+1]-'0';
      if(a+b<10)
          {
            replacing_num = a+b;
            replacing_index= i;
            break;
          }
   }
    s.erase(replacing_index, 2);
    s.insert(replacing_index,to_string(replacing_num) );
    return s;
   }

 }

 int main()
 {

    string S;
    cin>>S;
   cout<< maximumString(S);
   
  return 0;
 }