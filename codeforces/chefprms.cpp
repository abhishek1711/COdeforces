#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;cin>>t;
	bool prim[201];
	memset(prim,true,sizeof(prim));

	for(int p=2;p*p<=200;p++){
		if(prim[p]==true){
			for(int i=p*2;i<=200;i+=p){
				prim[i] = false;
			}
		}
	}

	while(t--){
		int n;cin>>n;
		int flu = 0;
		for(int i=1;i<n;i++){
			int a = i;
			int b = n- a ;

			int flub = 0,flua = 0;
			for(int k=2;k*k<=b;k++){
				if(prim[k] && b%k==0){
					if(prim[b/k] && (b/k != k)){
						flub = 1;
						break;
					}
				}
			}
			for(int k=2;k*k<=a;k++){
				if(prim[k] && a%k==0){
					if(prim[a/k] && (a/k != k)){
						flua = 1;
						break;
					}
				}
			}

			if(flua && flub){
				flu = 1;
				// cout<<a<<" "<<b; 
				break;
			}
		}

		if(flu){
			cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;

	}

}	