#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;cin>>t;
	while(t--)
	{
		int n,p,i;
		cin>>n>>p;
		 char arr[n];
        arr[0]='a';
        arr[n-1]='a';
        for(i=1;i<=n-2;i++)
           {
            	arr[i]='b';
           }
		if(n==1 || n==2)
		{
			cout<<"impossible"<<endl;
		}
        else if(n%2!=0 && p<n/2)
        {   
        	if(p==2)
        	{
        	for(int j=0;j<n;j++)
        	{
        		if(j%2==0)
        			cout<<"a";
        		else
        			cout<<"b";
        	}
        	cout<<endl;
            }

            else if(p<n/2)
            {   
            	if(p==1)
            		cout<<"impossible"<<endl;
            	else
            	{


            	char karr[n];
            	for(int k=0;k<n;k++){
            		karr[k]='a';
            	}
            	karr[n/2]='b';
            	karr[n/2-p]='b';
            	karr[n/2+p]='b';
            	for(int k=0;k<n;k++){
            		cout<<karr[k];
            	}
            	cout<<endl;
            }
            } 
        }
		else if(n%2==0 && p<n/2)
		{
			cout<<"impossible"<<endl;
		}
		else if(n==3 && p==1)
		{
			cout<<"impossible"<<endl;
		}
		else if(n==4 && p==2)
		{
			cout<<"impossible"<<endl;
		}
        else if(p==n/2)
        {
	     if(n%2==0)
		{   
			arr[n/2-1]='a';
			arr[n/2]='a';
            for(i=0;i<n;i++)
            {
            	cout<<arr[i];
            }
            cout<<endl;
           
		}

		else
		{
			arr[n/2]='a';
			for(i=0;i<n;i++)
            {
            	cout<<arr[i];
            }
            cout<<endl;

		}
	    }
	    else
	    {
	    	if(n%2==0)
		{   
			for(i=1;i<=n-2;i++)
				arr[i]='a';
			arr[n/2-1]='b';
			arr[n/2]='b';
            for(i=0;i<n;i++)
            {
            	cout<<arr[i];
            }
            cout<<endl;
           
		}

		else
		{   
			for(i=1;i<=n-2;i++)
				arr[i]='a';
			arr[n/2]='b';
			for(i=0;i<n;i++)
            {
            	cout<<arr[i];
            }
            cout<<endl;

		}
	    }
	}
}