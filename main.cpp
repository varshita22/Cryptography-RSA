#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

// global variables
ll p,q; // primes
ll n; // n =pq
ll t; // phi = p-1*q-1, totient
int flag;
int m; // message a number or string ?
ll e=7; // to be found
ll d;
int k=5;// security in Fermat's prime test

ll gcd(ll x, ll y)
{
    if (x < y)
        return gcd (y, x);
    else if (x % y == 0)
        return y;
    else return gcd (y, x % y);
}

ll power(ll a, ll n, ll p)// a= base, expo= n, mod_val = p
{
      int result = 1;
    a = a % p; // if a>=p
    while (n > 0)
    {
        if (n & 1) // if n is odd, multiply with the result
            result = (result * a) % p;
        n = n >> 1; // if n is even, divide it by 2
        a = (a * a) % p;
    }
    return result;
}

bool primecheck(ll num, int k) // Fermat
{

   if (num <= 1 || num == 4) return false; if (num <= 3) return true;
   while (k > 0) // try k times
   {
       int a = 2 + rand() % (num - 4); // picks a random number in range (2, n-2), with n>4
       if (gcd(num, a)!= 1) // checks if a and n are co-prime with gcd function
          return false;
       if (power(a, num - 1, num)!= 1)
          return false;
       k--;
    }
    return true;
}

void encrypt() // using SQ/MUL
{
  cout<<power(m,e,n);
}

int main()
{
  do {
     cout<<"Enter two primes :"<<endl;
     cin>>p>>q;
     if(primecheck(p,k) && primecheck(q,k)) break;
 	   else cout << "Wrong input; Please enter prime numbers.\n";
  } while(1);
    cout << "Enter message for encryption:\n";
	fflush(stdin);
	cin >> m;
    n = p * q;
	t = (p - 1) * (q - 1);
	encrypt();
}
