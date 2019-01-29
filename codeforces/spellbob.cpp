#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){

	int t;cin>>t;
	while(t--){
		string f,b;
		cin>>f>>b;
		int cnt=0;
		if((f[0]=='b' || b[0]=='b') && ((f[1]=='b' || b[1]=='b')) && (f[2]=='o' || b[2]=='o'))
			cnt=1;
		if((f[0]=='b' || b[0]=='b') && ((f[1]=='o' || b[1]=='o')) && (f[2]=='b' || b[2]=='b'))
			cnt=1;
		if((f[0]=='o' || b[0]=='o') && ((f[1]=='b' || b[1]=='b')) && (f[2]=='b' || b[2]=='b'))
			cnt=1;

		if(cnt==1)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;

	}
}