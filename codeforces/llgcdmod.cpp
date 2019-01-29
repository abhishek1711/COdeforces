#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

typedef long long int ll;

#define maxi 1000000007
int main(){
	int t;cin>>t;
	while(t--){
		ll a,b,n;cin>>a>>b>>n;

		ll fir = a-b;
		ll k = b ;

		// if(k>2 && fir>2){
		ll cnt[100000]={0};
		ll tik[100000]={0};

		
		while(k%2==0){
			k = k/2;
			cnt[2]++;
		}

		
		cnt[2] = cnt[2] * n;
		cnt[2]++;
		for(ll i=3;i<=sqrt(k);i = i+2){
			while(k%i==0){
				k = k/i;
				cnt[i]++;
			}
			cnt[i] = cnt[i] * n;
		}
		if(k<=1000000 && k!=1){
			cnt[k]++;
		}
		while(fir%2==0){
			fir = fir/2;
			tik[2]++;
		}

		for(ll i = 3;i<=sqrt(fir);i = i+2){
			if(cnt[i]!=0){
				while(fir%i==0){
					fir = fir/i;
					tik[i]++;
				}
			}
		}
		if(fir<=1000000 && fir!=1){
			tik[fir]++;
		}
		ll ans=1;
		ll cnt2 = min(tik[2],cnt[2]);
		while(cnt2!=0){
			ans = ans*2;
			ans = (ans%maxi);
			cnt2--;
		}

		ll s = min(sqrt(fir),sqrt(k));

		for(ll i = ;i<=s;i = i+2){
			
			ll ic = min(cnt[i],tik[i]);
			if(ic!=0){
				while(ic!=0){
					ans = ans * i;
					ans = (ans%maxi);
					ic--;
				}
			}
		}


		cout<<ans<<endl;
	// }
	// else
	// {	
	// 	int rui = 1;
	// 	if(fir==0){

	// 	}
	// }
	}
}
