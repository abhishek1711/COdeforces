#include <bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,k,i,j;cin>>n>>k;
		long long int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		long long int t=n*k;
		long long int b[t];
		long long int c=0,msum=0,s=INT_MIN;
		for(j=0;j<k;j++)
		{
			for(i=0;i<n;i++)
			{	
				b[i+c]=a[i];
			}
			c=c+n;
		}
		for(i=0;i<t;i++)
		{
			msum=msum+b[i];
			if(s<msum)
			{
				s=msum;
			}
			if(msum<0)
			{
				msum=0;
			}
		}

		cout<<s<<endl;	
	}
}