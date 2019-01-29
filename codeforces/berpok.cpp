#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int fac[1000];
	int temp = arr[0];
	while(temp%2==0){
		temp = temp/2;

	}
	while(temp%3==0){
		temp = temp/3;
	}

	int cnt=0;
	for(int i=3;i<=sqrt(temp);i++){
		while(temp%i==0){
			fac[cnt] = i;
			cnt++;
			temp = temp/i;
		}
	}	

	// cout<<temp<<" "<<cnt;

	if(temp>2){
		fac[cnt] = temp;
		cnt++;
	}


	// for(int i=0;i<cnt;i++){
	// 	cout<<fac[i]<<" ";
	// }

	int flagi=0;
	for(int i=1;i<n;i++){
		int num = arr[i];
		int flag = 0;
		for(int j=0;j<cnt;j++){
			if(num%fac[j]==0){
				num = num/fac[j];
			}
			else{
				flag=1;
				break;
			}
		}
		if(flag==1){
			flagi=1;
			break;
		}
		else{
			while(num%2==0){
		num = num/2;

	}
	while(num%3==0){
		num = num/3;
	}
	if(num!=1){
		flagi=1;
		break;
	}

		}
	}
	if(flagi==0){
		cout<<"Yes";
	}
	else
		cout<<"No";
}	