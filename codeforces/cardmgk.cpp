#include <bits/stdc++.h>

using namespace std;

int main(){

	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n];
		int ind;
		int maxi = INT_MIN;
		int mini = INT_MAX;
		int indm;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(maxi<=arr[i]){
				maxi = arr[i];
				ind = i;
			}
			if(mini>arr[i]){
				mini = arr[i];
				indm = i;
			}
		}
		// cout<<indm;
		if(indm==0){
			int flag = 0;
			for(int i=1;i<=n-1;i++){
				if(arr[i]<arr[i-1]){
					flag=1;
				}
				else
				{
					continue;
				}
			}
			if(flag){
				cout<<"NO"<<endl;
			}
			else
			{
				cout<<"YES"<<endl;
			}
		}
		
			else{

			ind = indm-1;
			int flag = 0;
			for(int i=1;i<=ind;i++){
				if(arr[i]<arr[i-1]){
					flag=1;
					break;
				}
				else
				{
					continue;
				}
			}
			// cout<<flag;
			if(flag==0){
			for(int i=indm+1;i<n;i++){
				if(arr[i]<arr[i-1]){
					flag=1;
					break;
				}
				else
				{
					continue;
				}
			}
			if(flag==0){
			if(arr[n-1]>arr[0]){
				flag = 1;
			}
}		}
			if(flag){
				cout<<"NO"<<endl;
			}
			else
			{
				cout<<"YES"<<endl;
			}

		}

	}

}