#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;cin>>n;
	int k = n - 100;

	int arr[200];
	int cnt = 0;

	for(int i = k;i<n;i++){
		int temp = i;
		int su = 0;
		while(temp!=0){
			su = su +temp%10;
			temp = temp/10;
		}
		if(su + i ==n){
			arr[cnt] = i;
			cnt++;
		}
	}

	cout<<cnt<<endl;
	for(int i=0;i<cnt;i++){
		cout<<arr[i]<<" ";
	}
}
