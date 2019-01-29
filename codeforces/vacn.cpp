#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int d[n][3];
	memset(d,0,sizeof(d));
	if(arr[0]==1)
	d[0][1] = 1;
	else if(arr[0]==2)
	d[0][2] = 1;
	else if(arr[0]==3){
	d[0][2] = 1;
	d[0][1] = 1;
}	
	int maximum;
	for(int i=1;i<n;i++){
		
			d[i][0] = max(d[i-1][0],max(d[i-1][1],d[i-1][2]));
			
		
		if(arr[i]==1 || arr[i]==3){
			d[i][1] = max(d[i-1][0] + 1,d[i-1][2] + 1);
		}
		if(arr[i]==2 || arr[i]==3){
			d[i][2] = max(d[i-1][1] + 1,d[i-1][0] + 1);
		}
	}
	// for(int i=0;i<n;i++){
	// 	maximum = max(d[i][0],max(d[i][1],d[i][2]));
	// }

		maximum = max(d[n-1][0],max(d[n-1][1],d[n-1][2]));
	cout<<n-maximum;
	return 0;
}