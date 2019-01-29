#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,x,y;cin>>n>>x>>y;

	int arr[n];
	double cnt=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]<=x){
			cnt++;
		}
	}

	if(x>y){
		cout<<n;
	}
	else{
		
		
	cout<<ceil((cnt/2));
}
}