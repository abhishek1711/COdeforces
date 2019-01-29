#include <bits/stdc++.h>
#define inf INT_MAX
using namespace std;

typedef long long int ll;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<pair<int,int> > vii;



int main(){
	int n;cin>>n;
	int k = n;
	int s=0,i=0;
	while(1){
		if(s<n){
			s = s + pow(2,i);
			i++;
		}
		else 
			break;
	}

	cout<<i;
}	