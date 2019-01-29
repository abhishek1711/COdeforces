#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int> > grid[30][30];
int n,m;

bool dfs(int i,int j){
	bool vis[n][m];
	memset(vis,false,sizeof(vis));
	vis[i][j]=true;

	queue<pair<int,int> > q;
	q.push(make_pair(i,j));

	while(!q.empty()){
		pair<int,int> p = q.front();
		q.pop();
		for(int k=0;k<grid[p.first][p.second].size();k++){
			if(!vis[grid[i][j][k].first][grid[i][j][k].second]){
				vis[grid[i][j][k].first][grid[i][j][k].second]=true;
				q.push(make_pair(grid[i][j][k].first,grid[i][j][k].second));
			}
		}
	}

	int flag = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(!vis[i][j]){
				flag=1;
				break;
			}
		}
	}

	return (flag==0 ? 1 : 0);
}

int main(){
	cin>>n>>m;
	// vector<pair<int,int> > grid[n][m];
	char arr[10];
	for(int i=0;i<n;i++){
		char c;cin>>c;
		arr[i] = c;
		if(c=='<'){
			for(int j=m-1;j>0;j--){
				grid[i][j].push_back(make_pair(i,j-1));
			}
		}
		else
		{
			for(int j=0;j<m-1;j++){
				grid[i][j].push_back(make_pair(i,j+1));
			}
		}
	}
	for(int i=0;i<m;i++){
		char c;cin>>c;
		if(c=='^'){
			for(int j=n-1;j>0;j--){
				grid[j][i].push_back(make_pair(j-1,i));
			}
		}
		else
		{
			for(int j=0;j<n-1;j++){
				grid[j][i].push_back(make_pair(j+1,i));
			}
		}
	}

	int flag = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(!dfs(i,j)){
				flag=1;
				break;
			}
		}
	}

	if(flag==0)
		cout<<"YES";
	else
		cout<<"NO";

	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
}