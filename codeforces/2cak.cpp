#include <bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n,a,b;
	cin>>n>>a>>b;
	//int t=min(a,b);
	int mini=INT_MIN;

    for(int i=1;i<n;i++)
    {
    	int j=n-i;
    	int t=min((a/i),(b/j));
    	if(mini<t)
    		mini=t;
    }
	cout<<mini;
}
	