#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<pair<int,int> > vii;\


int main(){
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int maxi = 0;
	int f=0,e=1;
	while(e!=n+1){
		int cnt = 1;
		while(1){

			if(e<n && 2*arr[f]>=arr[e]){
			f+=1;
			e+=1;
			cnt++;
		}
		else
			{
				break;
			}
		}

		maxi = max(maxi,cnt);
		f = e;
		e+=1;

	}
	cout<<maxi;
}