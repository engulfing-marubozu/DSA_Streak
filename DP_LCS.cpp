#include<bits/stdc++.h>
using namespace std;
string S1="ecfbefdcfca";
string S2="badfcbebbf";
vector<vector<int>> dp(S1.length()+1, vector<int>(S2.length()+1,0));

void make_dp_array(string S1, string S2)
{

    int S1_len=S1.length()+1;
    int S2_len = S2.length()+1;

    for(int i=1; i<S1_len; i++)
       for(int j=1; j<S2_len; j++)
       {
            if(S1[i-1]==S2[j-1])
             dp[i][j] = dp[i-1][j-1]+1;
               else
               dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
       }
        for(int i=0; i<S1_len; i++)
       {for(int j=0; j<S2_len; j++)
       
            cout<<dp[i][j]<<" ";
            cout<<endl;
       }

}

void len_lcs(string S1, string S2)
{      int S1_len=S1.length()+1;
    int S2_len = S2.length()+1;
        cout<<"The length of the longest common subsequence of both the above mentioned string is " <<dp[S1_len-1][S2_len-1]<<endl;

}
void print_lcs(string S1, string S2)
{ 
   string S;
   int i= S1.length(), j=S2.length();
   while(!(dp[i][j]==0 || i<0 || j<0))
    { 
          if(S1[i-1]==S2[j-1])
            {
                S+=S1[i-1];
                i--, j--;
            }
            else if(dp[i-1][j] < dp[i][j-1])
                      j--;
            else i--;
    }
     reverse(S.begin(),S.end());
 cout<<"and the resulting string is " <<S<<endl;
}


int main()
{  
    
    make_dp_array(S1,S2);
    len_lcs(S1,S2);
    print_lcs(S1,S2);
    return 0;
}