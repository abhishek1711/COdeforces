#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main(){
	int n,m;cin>>n>>m;
	int a[n],b[n],diff[n];
	int suma=0,sumb=0 ;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		diff[i] = a[i]-b[i];
		suma = suma + a[i];
		sumb = sumb + b[i];
	}
	// cout<<suma<<endl;
	if(suma<=m){
		cout<<0;
	}
	else if(sumb>=m){
		cout<<-1;
	}
	else{
		
		sort(diff,diff+n);
		// for(int i=0;i<n;i++){
		// 	cout<<diff[i];
		// }
		int cnt = 0;
		for(int i=n-1;i>=0;i--){
			
			if(suma<=m){
				// cout<<i;
				break;
			}
			else{
			suma = suma - diff[i];
			cnt++;
		}
		}

		
			cout<<cnt;
		
	}


}