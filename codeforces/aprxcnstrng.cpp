#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int i=0,j=1,sec=1;
	int minind=0,maxind=0;

	while(j!=n){
		if(arr[j]>arr[maxind])
			maxind = j;
		if(arr[j]<arr[minind])
			minind = j;

		if(abs(arr[maxind] - arr[minind])<=1){
			j++;
		}
		else{
			i=
		}
	}
}