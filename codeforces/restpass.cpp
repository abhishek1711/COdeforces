#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main(){
	string s;
	cin>>s;
	map<int,int> m;
	for(int i=0;i<10;i++){
		string k;cin>>k;
		int sum=0;
		for(int j=9;j>=0;j--){
			sum = sum + k[9-j] * pow(2,j);
		}
		// if(m.find(i) == m.end()){
			m[sum] = i;
		// }
	}

	for(int i =0;i<80;i=i+10){
		int r = 0,f=0;
		for(int j=10+i-1;j>=i;j--){
			r =r + s[j] * pow(2,f);
			f++;
		}
		cout<<m[r];	
	}
}