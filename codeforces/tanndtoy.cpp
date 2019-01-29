#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

	ll n,m;cin>>n>>m;
	ll arr[n+1];
	for(ll i=0;i<n;i++){
		cin>>arr[i];
	}
	arr[n] = 0;

	sort(arr,arr+n+1);
	ll cnt = 0;
	ll fin[1000000];
	for(ll i=1;i<=n;i++){
		ll s = arr[i-1] + 1;
		ll l = arr[i] - 1;
		if(l>=s){
		ll num = l - s + 1;

		ll tik = ((num)*(s+l))/2;
		if(tik <= m){
			m = m - tik;
			for(ll j=s;j<=l;j++){
				fin[cnt] = j;
				cnt++;
			}

			// cout<<"-1"<<endl;
		}
		
		else{

			
			while(s<=m){

				m = m - s;
				fin[cnt] = s;
				cnt++;
				s++;
				// cout<<"-2"<<endl;
				// cout<<s<<" "<<m<<endl;
			}
			break;
		}
	}
}

// cout<<cnt<<endl;
ll jo = arr[n] + 1;
while(jo<=m){
	m = m - jo;
	fin[cnt] = jo;
	jo++;
	cnt++;
}
	cout<<cnt<<endl;
	for(ll i=0;i<cnt;i++){
		cout<<fin[i]<<" ";
	}
}	