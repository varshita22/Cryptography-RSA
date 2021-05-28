#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

// global variables
ll p,q; // primes
ll n; // n =pq
ll t; // phi = p-1*q-1, totient
int flag;
string<int>m; // message
void encrypt()
{

}
int main()
{
  do {
     cout<<"Enter two primes :"<<endl;
     cin>>p>>q;
     if(primecheck(p) && primecheck(q)) break;
 	   else cout << "Wrong input; Please enter prime numbers.\n";
  } while(1);
  cout << "Enter message for encryption:\n";
	fflush(stdin);
	cin >> m;
  n = p * q;
	t = (p - 1) * (q - 1);
}
