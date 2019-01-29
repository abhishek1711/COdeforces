#include <bits/stdc++.h>
using namespace std;


int main(){

	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	sort(arr,arr+n);

	int x = min(arr[n-1] - arr[n-n+1],arr[n-2] - arr[n-n]);

	cout<<x;
}	