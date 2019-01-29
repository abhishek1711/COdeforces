#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;cin>>n>>m;

	int maxi = INT_MAX;
	for(int i=0;i<m;i++){
		int l,r;cin>>l>>r;
		maxi = min(maxi,(r-l+1));
	}

	cout<<maxi<<endl;
	int i=0,j=0;
	while(j<n){
		if(i>maxi-1){
			i=0;
		}
		cout<<i<<" ";
		i++;
		j++;
	}
}