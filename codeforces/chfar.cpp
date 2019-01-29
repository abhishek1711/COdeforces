#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		for(int i=0;i<n;i++){
			int a;cin>>a;
			if(a!=1){
				k--;
			}
		}

		if(k>=0){
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}

}	