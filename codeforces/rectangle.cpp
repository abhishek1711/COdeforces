#include <bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if(a==b && c==d)
		{
			cout<<"YES"<<endl;
			goto cc;
		}	
		else if(a==c && b==d)
		{
			cout<<"YES"<<endl;
			goto cc;
		}
		else if(a==d && b==c)
		{
			cout<<"YES"<<endl;
			goto cc;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		cc:;
	}
}