#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int gcd(int fir,int sec){
	if(sec==0){
		return fir;
	}

	gcd(sec,(fir%sec));
}

int main(){
	int t;cin>>t;
	while(t--){
		long long int a,b,n;
		cin>>a>>b>>n;

		long long int ap = (int)(pow(a,n) + 0.5);
		long long int bp = (int)(pow(b,n) + 0.5);

		long long int fir = ap + bp;
		long long int sec = a - b;

		// if(a==b){
		// 	cout<<fir<<endl;
		// }
		// else
		// {
			long long int k = gcd(fir,sec);
			k = k%((int)(pow(10,9) + 0.5) + 7);
			cout<<k<<endl;
		// }
		
	}
}