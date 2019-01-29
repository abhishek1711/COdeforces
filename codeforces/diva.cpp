#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
	int  n,m;cin>>n>>m;
	int arr[m+1]={0};
	for(int i=0;i<n;i++){
		int l,r;cin>>l>>r;
		for(int j=l;j<=r;j++){
			arr[j]=1;
		}
	}
	int cnt=0;
	int stor[m];
	for(int i=1;i<=m;i++){
		if(arr[i]==0){
			stor[cnt] = i;
			cnt++;
		}
	}
	cout<<cnt<<endl;
	for(int i=0;i<cnt;i++){
		cout<<stor[i]<<" ";
	}

}