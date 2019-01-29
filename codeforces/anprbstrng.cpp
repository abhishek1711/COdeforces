#include <bits/stdc++.h>

using namespace std;

int main(){
	int k;cin>>k;
	string s;cin>>s;
	int len = s.length();

	int i=0;j=0;k=0;l=0;
	int cnt=0;
	while(j!=len){
		if(s[j]=='0' && cnt==0)
		{
			j++;
		}
		if(s[j]=='1' && cnt==0){
			i=j;
			j++;
			cnt++;
		}
		if(s[j]=='1' && cnt==k){
			l=j;
			j++;
			while(s[j]=='0'){
				j++;
			}


		}

	}

}