#include <bits/stdc++.h>
using namespace std;

int main(){

	string s;cin>>s;

	int len = s.size();
	int cnt=1;
	// for(int i=0;i<len-1;){
	// 	cnt+=1;
	// 	int j=i+1;
	// 	int t=0;
	// 	while(s[j]==s[i] && j!=len){
	// 		j++;cnt++;
	// 		t=1;
	// 	}

	// 	if(t==1)
	// 		cnt--;
	// 	i=j;

	// }
	
	int ans = 25*(len+1) + 1;

	cout<<ans;

}	