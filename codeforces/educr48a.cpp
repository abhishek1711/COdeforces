#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main(){
	 ios_base::sync_with_stdio(false);
	 cin.tie(NULL);

	 int n,m;cin>>n>>m;
	 int arr[n];
	 int stor[n];
	 int k=m;
	 for(int i=0;i<n;i++)
	 {
	 	cin>>arr[i];
	 	if(((arr[i]-k))>=0){
	 		

	 		stor[i] = (arr[i]-k)/m + 1;
	 		k = (m-((arr[i]-k)%m));
	 	}
	 	else
	 	{
	 		stor[i]=0;
	 		k = k-arr[i];
	 	}
	 	
	 }

	 for(int i=0;i<n;i++){
	 	cout<<stor[i]<<" ";
	 }
}