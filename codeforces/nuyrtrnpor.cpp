#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,t,i,j;
	cin>>n>>t;

	vector <int> adj[n+1];
    
    for(i=0;i<n-1;i++)
    {
    	int a;
    	cin>>a;

    	adj[i+1].push_back(a+i+1);
    }

    bool visit[n+1];
    for(i=1;i<=n;i++)
    {
    	visit[i]=false;
    }
    queue <int> q;
    
    q.push(1);
    visit[i]=true;

    while(!q.empty())
    {
    	int u=q.front();
    	q.pop();
        vector <int> :: iterator itr;

    	for(itr=adj[u].begin();itr!=adj[u].end();itr++)
    	{
    		if(visit[*itr]==false)
    		{
    			q.push(*itr);
                visit[*itr]=true;
    		}  
    	}
    }
    

    if(visit[t]==true)
    	cout<<"YES";
    else
    	cout<<"NO";

}