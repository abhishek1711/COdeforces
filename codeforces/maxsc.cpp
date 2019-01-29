#include <bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,j,cunt=0;
		vector<long long int> arr[n];
		for(i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				long long int a;
				cin>>a;
				arr[i].push_back(a);
			}
		}

		for(i=0;i<n;i++)
		{
			sort(arr[i].begin(),arr[i].end());
		}

		long long int ele[n];
		ele[cunt]=arr[n-1][n-1];
		long long int temp=arr[n-1][n-1];
		cunt++;
        long long int tik=0;
		for(i=n-2;i>=0;i--)
		{   
			long long int po;
			long long int cot=0;
			for(j=n-1;j>=0;j--)
			{
				if(arr[i][j]<temp)
				{
					po=arr[i][j];
					cot++;
					break;
				}
			}
			if(cot==0)
			{
				tik=1;
				break;
			}
			else
			{
				ele[cunt]=po;
				temp=po;
				cunt++;
			}

		}
		long long int sum=0;
		if(tik==1)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			for(i=0;i<n;i++)
			{
				sum=sum+ele[i];
			}
			cout<<sum<<endl;
		}

	}
}