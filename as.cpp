#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{  vector<int> vect{10,-45,54};
 all_of(vect.begin(), vect.end(), [](int x) { return x>0; })?
          cout << "All are positive elements" :
          cout << "All are not positive elements";
 
  return 0;
}
