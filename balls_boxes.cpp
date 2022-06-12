//different ways to put n balls into m boxes (any box can have numbeers from 0 to n)
#include<isotream>
using namespace std;
void print_perm()
{
     for(int i=0; i<n+1; i++)
    {
          print_perm(n,m);
    }
}
int main()
{
    int n=7;
    int m=10;
    vector<int> vect;
    for(int i=0; i<n+1; i++)
    {
          print_perm(n,m);
    }
    return 0;
}