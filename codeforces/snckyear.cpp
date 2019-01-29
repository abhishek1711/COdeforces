#include <bits/stdc++.h>
using namespace std;


int main(){
	int arr[5];
	arr[0] = 2010,arr[1] = 2015,arr[2]=2016,arr[3] = 2017,arr[4] = 2019;
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int flag=0;
		for(int i=0;i<5;i++){
			if(arr[i]==n){
				flag=1;
				break;
			}
		}

		if(flag){
			cout<<"HOSTED"<<endl;
		}
		else
		{
			cout<<"NOT HOSTED"<<endl;
		}
	}

	return 0;

}