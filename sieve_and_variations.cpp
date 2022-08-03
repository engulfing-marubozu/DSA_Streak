#include<bits/stdc++.h>

using namespace std;

void print_all_primes_till_n(long long int n)                   // SIEVE ALGORITHM
{
   vector<bool>  visited(n+1, true);   // initially each number from 1 to n is prime
   vector<int>  res;

   for(int i=2; i*i<n+1; i++)
     {
        if(visited[i])
         {
           res.push_back(i);
          for(int j=i; j<n+1; j+=i)
            visited[j]=false;   
         }
     }
for(int i=2; i<=n; i++)
  if(visited[i])
  res.push_back(i);

  for(auto it : res)
  cout<<it<<" ";
 cout<<endl;
}

void  print_all_prime_divisors_of_n(long long int n)                   // SIEVE ALGORITHM
{
   vector<bool>  visited(n+1, true);   // initially each number from 1 to n is prime
   vector<int>  res;

   for(int i=2; i<n+1; i++)
     {
        if(visited[i] && n%i==0)
         {
            res.push_back(i);
          for(int j=i; j<n+1; j+=i)
            visited[j]=false;   
         }
     }
for(auto it: res)
 cout<<it<<" ";
 cout<<endl;
}

void print_prime_factorization_of_n(int n)
{
    vector<bool>  visited(n+1, true);   // initially each number from 1 to n is prime
   vector<int>  res;

   for(int i=2; i<n+1; i++)
     {
        if(visited[i] && n%i==0)
         {
            
          for(int j=i; j<n+1; j+=i)
            {
                visited[j]=false;
                res.push_back(i);   
            }
         }
     }
for(auto it: res)
 cout<<it<<" ";
 cout<<endl; 
}

int main()
{
    long long int n;
    cin>>n;

    print_all_primes_till_n(n);
    print_all_prime_divisors_of_n(n);
    print_prime_factorization_of_n(n);
    return 0;
}