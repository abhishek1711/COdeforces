#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

typedef long long int ll;

ll maxi = (1e9 + 7);

// #define maxi o
int main(){
	int t;cin>>t;
	while(t--){
		ll a,b,n;cin>>a>>b>>n;

		// if(a==b){
		// 	ll
		// }

		ll fir = a-b;
		ll k = b ;

		ll ans =1;
		if(a==b){
			ll tempa=1,tempb=1;
			while(n!=0){
				tempa = tempa *a;
				tempa= tempa%maxi; 
				tempb = tempb*b;
				tempb= tempb%maxi;
				n--;
			}
			ll t = (tempa+tempb)%maxi;
			cout<<t<<endl;
		}
		else{
		ll p = sqrt(k);
		for(ll i =2;i<=p+1;i++){
			ll cntf=0,cntk=0;
			while(fir%i==0){
				cntf++;
				fir = fir/i;
			}

			if(cntf!=0){
				while(k%i==0){
					cntk++;
					k=k/i;
				}
			}
			cntk = cntk*n;
			if(i==2)
				cntk++;


			ll cnt = min(cntk,cntf);
			while(cnt!=0){
				ans = ans*i;
				ans = ans%maxi;
				cnt--;
			}
		}

		if(fir%k==0){
			ans = ans*k;
		}

		ans = ans%maxi;

		cout<<ans<<endl;

	}

	}

}	