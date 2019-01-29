#include <bits/stdc++.h>

using namespace std;

int main(){

	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		map<string,float> stor;
		stor.clear();
		float cnti=0;
		for(int i=0;i<n;i++){
			string s;cin>>s;
			if(stor.find(s)!=stor.end()){
				cnti = cnti + stor[s]/2;
			}

			else
			{	
				float cnt=0;
				int len = s.size();
				cnt = cnt + 0.2;
				for(int i=1;i<len;i++){
					if(s[i]=='d' || s[i]=='f'){
						if(s[i-1]=='d' || s[i-1]=='f'){
							cnt = cnt + 0.4;
						}
						else{
							cnt = cnt + 0.2;
						}
					}
					else
					{
						if(s[i-1]=='d' || s[i-1]=='f'){
							cnt = cnt + 0.2;
						}
						else{
							cnt = cnt + 0.4;
						}
					}
				}

				stor[s] = cnt;
				cnti = cnti + cnt;
			}
		}

		cout<<cnti*10<<endl;
	}



}	