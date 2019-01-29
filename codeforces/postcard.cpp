#include <bits/stdc++.h>
using namespace std;

int main(){

	string s;cin>>s;
	int k;cin>>k;
	int len = s.size();

	int cnt=0;
	int ti=0;
	for(int i=0;i<len;i++){
		if(s[i]=='?' || s[i]=='*'){
			cnt++;
		}
		if(s[i]=='*'){
			ti=1;
		}
	}

	if(len-2*cnt>k){
		cout<<"Impossible";
	}
	else if(ti==0){
		if(len-2*cnt<=k && k<=len-cnt){
			string nw = "";
			int tik = k - len + 2*cnt;
			int nik=0;
			for(int i=0;i<len;i++){
				if(i+1<len && s[i+1]=='?' && nik==tik){
					continue;
				}
				else if(s[i]=='?'){
					continue;
				}
				else if(i+1<len && s[i+1]=='?' &&nik<tik){
					nw = nw + s[i];
					nik++;
				}
				else
				{
					nw = nw + s[i];
				}
			}
			// nw = nw + s[len-1];
			cout<<nw;
		}
		else{
			cout<<"Impossible";
		}
	}
	else
	{
		string nw = "";
		int tik = k - len + 2*cnt;
		int nik=0;
			for(int i=0;i<len;i++){
				if(i+1<len && s[i+1]=='?' || s[i]=='?'){
					continue;
				}
				else if(i+1<len && s[i+1]=='*' ){
					if(nik==0){
					for(int ku=0;ku<tik;ku++){
					nw = nw + s[i];
				}
					nik=1;
				}
				else
				{
					continue;
				}
				}
				else if(s[i]=='*'){
					continue;
				}
				else
				{
					nw = nw + s[i];
				}
			}
			// nw = nw + s[len-1];
			cout<<nw;
	}
	
}	