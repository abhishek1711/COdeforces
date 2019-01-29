#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main(){
	int n;cin>>n;
	string s,t;
	cin>>s>>t;
	int hasa[26]={0},hasb[26] = {0};
	for(int i=0;i<n;i++){
		hasa[s[i]-97]++;
		hasb[t[i]-97]++;
	}
	bool k = true;
	for(int i=0;i<26;i++){
		if(hasa[i] != hasb[i])
			k = false;
	}

	if(k==true){
		int str[10000];
		int cnt=0;
		for(int i=0;i<n;i++){
			char c = t[i];
			int ind;
			for(int j =i;j<n;j++){
				if(s[j]==c)
				{
					ind = j;
					break;
				}

			}
			if(ind==i)
				continue;
			else
			{	
				for(int k = ind;k>=i+1;k--){
					str[cnt] = k;
					cnt++;
					swap(s[k],s[k-1]);
				}
			}
		}
		cout<<cnt<<endl;
		for(int i=0;i<cnt;i++){
			cout<<str[i]<<" ";
		}
	}
	else
		cout<<-1;
}