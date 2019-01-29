#include <bits/stdc++.h>
#define inf INT_MAX
using namespace std;

typedef long long int ll;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<pair<int,int> > vii;



int main(){
	ll n,s;cin>>n>>s;
	ll arr[n];
	for(ll i=0;i<n;i++){
		cin>>arr[i];
	}

	sort(arr,arr+n);

	ll mid = arr[n/2];
	ll cst = 0;
	cst = cst + abs(s-mid);
	mid = s;
	for(ll i=0;i<n;i++){
		if(i!=n/2){
			if(i<n/2){
				if(arr[i]>mid)
				{
					cst = cst + arr[i] - mid;
				}
			}
			else
			{
				if(arr[i]<mid){
					cst = cst + mid - arr[i];
				}
			}
		}
	}

	cout<<cst;
}	