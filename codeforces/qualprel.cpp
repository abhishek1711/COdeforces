#include <bits/stdc++.h>

using namespace std;

bool comp(int a,int b){
	return (a>b);
}

int main()
{
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}

		sort(arr,arr+n,comp);

		int tik = arr[k-1];
		int cnt=k-1;
		while(cnt<n && (arr[cnt]>=tik)){
			cnt++;
		}

		cout<<cnt<<endl;
		
	}

}	