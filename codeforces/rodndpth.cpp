#include <bits/stdc++.h>
using namespace std;

int num = 1e9 + 7;


int main(){
	int m,n,p;cin>>m>>n>>p;
	int arr[m][n];
	int dp[m][n];
	memset(arr,0,sizeof(arr));
	for(int i=0;i<p;i++){
		int a,b;cin>>a>>b;
		arr[a-1][b-1] = 1;
		
	}

	if(arr[0][0]==1)
	{
		cout<<0;
	}
	else
	{
	dp[0][0]=1;
	for(int i=1;i<m;i++){
		if(arr[i][0]==1)
			dp[i][0]=0;
		else
		dp[i][0] = dp[i-1][0];
	}
	for(int i=1;i<n;i++){
		if(arr[0][i]==1)
			dp[0][i]=0;
		else
		dp[0][i] = dp[0][i-1];
	}

	for(int i=1;i<m;i++){
		for(int j=1;j<n;j++){
			if(arr[i][j]==1)
			{
				dp[i][j] = 0;
			}
			else
			dp[i][j] = (dp[i-1][j] + dp[i][j-1])%num;
		}
	}
	// cout<<num;

	if(arr[m-1][n-1]==1){
		cout<<0;
	}
	else
	cout<<dp[m-1][n-1]%num;
}

}