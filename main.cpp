#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

// global variables
ll p,q; // primes
ll n; // n =pq
ll t; // phi = p-1*q-1, totient
int flag;
int m; // message a number or string ?
ll e=7;

vector<int> decToBinary(ll num)
{
    // array to store binary number
    vector<int> binaryNum;

    while (num > 0) {
        // storing remainder in binary array
        binaryNum.push_back (num % 2);
        num = num / 2;
    }

    reverse(binaryNum.begin(), binaryNum.end());
    /*for(int i=0;i<binaryNum.size();i++)
        cout<<binaryNum[i]<<" ";
    cout<<endl;*/
    return binaryNum;
}
void encrypt() // using SQ/MUL
{
  vector<int>bine;
  bine=decToBinary(e);
  ll r=m; // m is number here
  for(ll i = 1; i<bine.size();i++)
  {
    r=(r*r) % n;
    if(bine[i]==1)
        {r=(r*m) %n;}

  }
  cout<<r;
}
int main()
{
  //do {
     cout<<"Enter two primes :"<<endl;
     cin>>p>>q;
     //if(primecheck(p) && primecheck(q)) break;
 	   //else cout << "Wrong input; Please enter prime numbers.\n";
  //} while(1);
  cout << "Enter message for encryption:\n";
	fflush(stdin);
	cin >> m;
    n = p * q;
	t = (p - 1) * (q - 1);
	encrypt();
}
