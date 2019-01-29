#include <bits/stdc++.h>
using namespace std;


int main(){
	int n;cin>>n;
	string t;cin>>t;
	string s="";
	int i=0;
	int cnt=1;
	while(i<n){
		s = s + t[i];
		i = i+cnt;
		cnt++;
	}

	cout<<s;
}