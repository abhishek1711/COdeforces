#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define maxi 100000

typedef long long int ll;

int resa[maxi],resb[maxi],sui[maxi];





int mult(ll x,int res_size){
	int carry = 0;

	for(int i=0;i<res_size;i++){
		int prod = resa[i] * x + carry;
		resa[i] = prod % 10;
		carry = prod/10;
	}

	while(carry){
		resa[res_size] = carry%10;
		carry = carry/10;
		res_size++;
	}

	return res_size;
}

ll power(ll x,ll n){
	ll res_size = 0;
	ll temp = x;

	while(temp!=0){
		resa[res_size++] = temp % 10;
		temp = temp /10;
	}

	for(int i=2;i<=n;i++){
		res_size = mult(x,res_size);
	}

	return res_size;
}

int multb(ll x,int res_size){
	int carry = 0;

	for(int i=0;i<res_size;i++){
		int prod = resb[i] * x + carry;
		resb[i] = prod % 10;
		carry = prod/10;
	}

	while(carry){
		resb[res_size] = carry%10;
		carry = carry/10;
		res_size++;
	}

	return res_size;
}

ll sumi(ll res_sizea,ll res_sizeb){
	ll carry = 0;
	ll res_size =0;
	for(ll i =0;i<res_sizeb;i++){
		sui[i] = (resa[i] + resb[i] + carry)%10;
		carry = (resa[i] + resb[i] + carry)/10;
		res_size++;
	}

	for(ll i=res_sizeb;i<res_sizea;i++){
		sui[i] = (resa[i] + carry) % 10;
		carry = (resa[i] + carry) / 10;
		res_size++;
	}
	while(carry){
		sui[res_size] = carry%10;
		carry = carry/10;
		res_size++;
	}

	return res_size;
}

ll powerb(ll x,ll n){
	ll res_size = 0;
	ll temp = x;

	while(temp!=0){
		resb[res_size++] = temp % 10;
		temp = temp /10;
	}

	for(int i=2;i<=n;i++){
		res_size = multb(x,res_size);
	}

	return res_size;
}

// C++ program to find GCD of two numbers such that
// the second number can be very large.
 
// function to find gcd of two integer numbers
ll gcd(ll a, ll b)
{
    if (!a)
       return b;
    return gcd(b%a,a);
}
 
// Here 'a' is integer and 'b' is string.
// The idea is to make the second number (represented
// as b) less than and equal to first number by
// calculating its mod with first integer number
// using basic mathematics
ll reduceB(ll a, ll sumisize)
{
    // Initialize result
    ll mod = 0;
 
    // calculating mod of b with a to make
    // b like 0 <= b < a
    for (ll i=sumisize-1; i>=0; i--)
        mod = (mod*10 + sui[i])%a;
 
    return mod; // return modulo
}
 
// This function returns GCD of 'a' and 'b'
// where b can be very large and is represented
// as a character array or string
ll gcdLarge(ll a,ll sumisize)
{
    // Reduce 'b' (second number) after modulo with a
    ll num = reduceB(a,sumisize);
 
    // gcd of two numbers
    return gcd(a, num);
}
 

int main(){
	int t;cin>>t;
	while(t--){
		ll a,b,n;
		cin>>a>>b>>n;
		ll res_sizea,res_sizeb;

		res_sizea = power(a,n);
		res_sizeb = powerb(b,n);

		ll sumisize = sumi(res_sizea,res_sizeb);

		ll sec = (a-b);

	for(ll i = 0;i<sumisize;i++){
		cout<<sui[i];
	}	
	cout<<endl;_
	cout<<gcdLarge(sec,sumisize)<<endl;
		
	}

	
}