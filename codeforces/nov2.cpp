#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		long int r;cin>>r;
		long int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}

		long int max=0,min=1000000001,cut=0;
        if(arr[0]>r)
			{
				max=arr[0];
			}
		else
			{
				min=arr[0];
			}
		for(int i=1;i<n;i++)
		{
			

			if(arr[i]>r && max!=0)
			{
				if(arr[i]>max)
				{
					cut=-1;
					break;
				}
				else
				{   
					max=arr[i];
					continue;
				}
			}
			else if(arr[i]>r && max==0)
			{
				max=arr[i];
			}
			else if(arr[i]<r && min!=1000000001)
			{
                if(arr[i]<min)
				{
					cut=-1;
					break;
				}
				else
				{   
					min=arr[i];
					continue;
				}
			}
			else if(arr[i]<r && min==1000000001)
			{
				min=arr[i];
			}
		}

		if(cut==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}