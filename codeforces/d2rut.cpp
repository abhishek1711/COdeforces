#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,m,i,j;cin>>n>>m;
    //vector <int> adjtr[n];
    int arrt[n][n],arrb[n][n];
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		arrt[n][n]=0;arrb[n][n]=0;
    	}
    }
    for(i=0;i<m;i++)
    {
    	int u,v;
    	cin>>u>>v;
    	arrt[u][v]=1;
    	arrt[v][u]=1;
    }
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		if(arrt[i][j]==0)
    		{
    			arrb[i][j]=1;
    		}
        }
    }


}