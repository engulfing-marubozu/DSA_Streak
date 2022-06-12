#include<iostream>

#include<vector>
#define ll long long int
#include<math.h>
using namespace std;
vector<int> dp(26,-1);
int print(int a )
{    if(dp[a]!=-1)
	return dp[a];

     cout <<a<<"\n";

    if(a==1 || a==2)
     {dp[a]=1;
	 return 1;}
		
   
	int x= print(a-1)+ print(a-2);
	dp[a]=x;
	return x;
}

 int main()
 {   
	 int x=print(5);
	 cout<<x;
	 return 0;
 }

// #include<iostream>
// #define ll long long int
// using namespace std;

// int party (int n)
// {   if(n==1)
//     return 1;
//     int x= party(n-1)+ (n-1)*party(n-2);
//     return x;
// }


// int main()
// {   int x= party(4);
//   cout<<"hello";
//     cout<<x;
//     return 0;
// }