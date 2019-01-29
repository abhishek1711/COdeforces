#include <bits/stdc++.h>


#define mp make_pair
#define pb push_back

using namespace std;

const int maxi = 100010;
int par_uf[maxi],size_uf[maxi];


void init(int n){
	for(int i=0;i<n;i++){
		par_uf[i] = i;
		size_uf[i] = 1;
	}
}

int find(int x){
	while(par_uf[x]!=x){
		
		x = par_uf[x];
	}

	return x;
}

void unite(int x,int y){
	x = find(x); y =find(y);

	if(x==y) return;
	if(size_uf[x]<size_uf[y]){
		par_uf[x] = par_uf[y];
		size_uf[y]+=size_uf[x];
	}
	else{
		par_uf[y] = par_uf[x];
		size_uf[x]+=size_uf[y];
	}
}

bool same(int x,int y){
	return find(x)==find(y);
}


int n,m,q,qa[maxi],qb[maxi];
vector< pair<int,int> > edge[maxi];
vector< vector<int> > comp;
vector<int> appear[maxi];

const int B = 450;
vector<int> big;
int bigid[maxi];
int table[B+10][maxi];

int used[maxi];
vetor<int> temp[maxi];


int main(){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	cin>>n>>m;
	
	for(int i=0;i<m;i++){
		int a,b,c;cin>>a>>b>>c;
		a--;b--;c--;
		edge[c].push_back(make_pair(a,b));
	}

	cin>>q;
	for(int i=0;i<q;i++){
		qa[i]--;qb[i]--;
	}

	init(n);

	for(int c=0;c<maxi;c++){
		for(int i=0;i<edge[c].size();i++){
			int a = edge[c][i].first, b = edge[c][i].second;
			unite(a,b);
		}

		for(int i=0;i<edge[c].size();i++){
			int a = edge[c][i].first, b = edge[c][i].second;
			if(!used[a]){
				temp[find(a)].pb(a);
				used[a] = 1;
			}
			if(!used[b]){
				temp[find(b)].pb(b);
				used[b] = 1;
			}
		}

		for(int i=0;i<edge[c].size();i++){
			int a = edge[c][i].first,b = edge[c][i].second;
			if(temp[a].size()>0){
				comp.pb(temp[a]);
				temp[a].clear();
			}
			if(temp[b].size()>0){
				comp.pb(temp[b]);
				temp[b].clear();
			}

			used[a] = 0;
			used[b] = 0;
			par_uf[a] = a;
			par_uf[b] = b;
			size_uf[a] = 1;
			size_uf[b] = 1;
		}


	}

	for(int i=0;i<comp.size();i++){
		for(int j=0;j<comp[i].size();j++){
			appear[comp[i][j]].pb(i);
		}
	}

	for(int i=0;i<n;i++){
		if(appear[i].size()>B){
			bigid[i] = big.size();
			big.pb(i);
		}
		else{
			bigid[i] = -1;
		}
	}

	for(int i=0;i<big.size();i++){
		int b = big[i];
		for(int j=0;j<appear[b].size();j++){
			int c = appear[b][j];
			for(int k=0;k<comp[c].size();k++){
				table[i][comp[c][k]]++;
			}
		}
	}

	for(int i=0;i<q;i++){
		int a = qa[i],b = qb[i];
		if(bigid[a]==-1){
			swap(a,b);
		}
		if(bigid[a] !=-1){
			cout<<table[bigid[a][b]]<<endl;
		}else{
			int cur1 = 0,cur2=0,res = 0;
			while(cur1<appear[a].size() && cur2<appear[b].size()){
				if(appear[a][cur1] == appear[b][cur2]){
					res++;
					cur1++;
					cur2++;
				}else if(appear[a][cur1] < appear[b][cur2]){
					cur1++;
				}
				else{
					cur2++:
				}
			}

			cout<<res<<endl;
		}
	}
	return 0;
}