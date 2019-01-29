#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    int p[n+1];
    for(int i=1;i<=n;i++){
    	cin>>p[i];
    }
	for(int i=1;i<=n;i++)
	{
		int cnt[n+1]={0};
		int j = i;
		cnt[j]++;
		while(cnt[j]!=2){
			j = p[j];
			cnt[j]++;
		}

		cout<<j<<" ";
	}
	
     return 0;
}