// O(n) time

// i : 1 to n and if (n%i==0) cnt++ 

// Faster : if i divides n then n/i also divides n 

// i from 1 to root n

int cnt_div(int n){
int cnt = 0;
for (int i = 1; i*i<=n; i++) {
  if(n % i == 0) cnt++;  // i is a factor
                 if (i!=n/i) cnt++; // (n / i) is also a factor
}
return cnt;
}

// from 1 to n 

// simple loop works in n root n time 

// iterate on multiples instead of divisors... for 49...2,3,4,5 are wasted iterations

// time is [n/1] + [n/2] + [n/3] + [n/4].... [n/n] < O(nlogn)

int main(){
  int n;
  cin >> n;
  vector<int> div(n+1);
  for (int 1 = 1; i <= n; i++){
    for (int j = i; j ‹= n; j += i){
       div[j]++; // i is a divisor of j
   }
}
  for (int i = 1; i ‹= n; i++){
  cout << div[i] «‹ "\n";
}    
}


// C++ program to print all primes smaller than or equal to
// n using Sieve of Eratosthenes
#include <bits/stdc++.h>
using namespace std;
  
void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
  
    for (int p = 2; p * p <= n; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
  
    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}
  
// Driver Code
int main()
{
    int n = 30;
    cout << "Following are the prime numbers smaller "
         << " than or equal to " << n << endl;
    SieveOfEratosthenes(n);
    return 0;
}


// the following implementation
// stores only halves of odd numbers
// the algorithm is a faster by some constant factors
  
#include <bitset>
#include <iostream>
using namespace std;
  
bitset<500001> Primes;
void SieveOfEratosthenes(int n)
{
    Primes[0] = 1;
    for (int i = 3; i*i <= n; i += 2) {
        if (Primes[i / 2] == 0) {
            for (int j = 3 * i; j <= n; j += 2 * i)
                Primes[j / 2] = 1;
        }
    }
}
  
int main()
{
    int n = 100;
    SieveOfEratosthenes(n);
    for (int i = 1; i <= n; i++) {
        if (i == 2)
            cout << i << ' ';
        else if (i % 2 == 1 && Primes[i / 2] == 0)
            cout << i << ' ';
    }
    return 0;
}


