#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;cin>>n>>m;
	int cnt = 0;
	while(!(n==0 || m==0)){
		if(n>m && n>=2){
			n = n-2;
			m = m-1;
			cnt++;
		}
		else if(m>n && m>=2){
			m = m-2;
			n = n-1;
			cnt++;
		}
		else if(m==n && m>=2){
			m = m-2;
			n=n-1;
			cnt++;
		}
		else{
			break;
		}
	}

	cout<<cnt;
}	