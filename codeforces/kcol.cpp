#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int arr[n];
	int tir[n];
	int lik[50001]={0};
	for(int i=0;i<n;i++){
		cin>>arr[i];
		tir[i]=arr[i];
		lik[arr[i]]++;
	}

	sort(arr,arr+n);

	int col[n];
	int i=0,j;
	int cont=1;
	int ru=0;
	while(i!=n){
		col[i]=cont;
		cont++;
		int j=i+1;
		int tu=0;
			while(j<n && arr[j]==arr[i]){
				if(cont>k){
					tu=1;
					break;
				}
				col[j]=cont;
				cont++;j++;
			
		}

		i=j;
		cont=1;
		if(tu){
			ru=1;
			break;
		}
	}
	if(ru){
		cout<<"NO";

	}
	else{
		cout<<"YES"<<endl;
		for(int i=0;i<n;i++){

			cout<<lik[tir[i]]<<" ";
			lik[tir[i]]--;
		}
	}
}