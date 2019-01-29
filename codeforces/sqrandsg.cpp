#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;cin>>n;
	long double sr = sqrt(n);

	if(sr - floor(sr) == 0){
		cout<<2*sr;
	}
	else{
			int i=1;
			while(i*i<n){
				i = i + 1;
			}
			int sq = i*i;
			int prevsq = (i-1)*(i-1);
			int mid = (sq + prevsq)/2;
			if(n<=mid){
				cout<<((2*i)-1);
			}
			else{
				cout<<(2*i);
			}
		}
	

}	