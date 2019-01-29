#include <bits/stdc++.h>
using namespace std;

int main()
{   
	 ios_base::sync_with_stdio(false);
	 cin.tie(NULL);
	long int n,x;
    long int i;

	cin>>n>>x;
	long int arr[n];
	long int sum=0,left;
    for(i=0;i<n;i++)
    {
    	cin>>arr[i];
    	sum=sum+arr[i];
    }

    if(sum==x )
    {   
    	if(n==1)
    	cout<<"YES";
        else
        	cout<<"NO";
    }
    
    else
    {
    left=x-sum;
    
    if(left!=n-1)
    {
    	cout<<"NO";
    }
    else
    {
    	cout<<"YES";
    }
    }

} 