#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> a,pair<int,int> b){
	if(a.first!=b.first)
		return a.first < b.first;
	if(a.second!=b.second)
		return a.second < b.second;
}

int main(){

	int p,s;cin>>p>>s;
	vector<pair<int,int> > prblm;
	for(int i=0;i<p;i++){
		vector<pair<int,int> > v;
		int sc[s],nu[s];
		for(int j=0;j<s;j++){
			cin>>sc[j];
		}
		for(int j=0;j<s;j++){
			cin>>nu[j];
		}

		pair<int,int> p ;
		for(int j=0;j<s;j++){
			p.first=sc[j];
			p.second=nu[j];

			v.push_back(p);
		}

		sort(v.begin(),v.end());
		int cnt=0;
		for(int j=0;j<v.size()-1;j++){
			if(v[j].second > v[j+1].second)
				cnt++;
		}

		p.first = cnt;
		p.second = i;

		prblm.push_back(p); 

	}

	sort(prblm.begin(),prblm.end(),comp);

	for(int i=0;i<prblm.size();i++){
		cout<<prblm[i].second + 1<<endl;
	}

}