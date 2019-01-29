#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i0=0;i0<t;i0++)
	{
		int n,k,i,j;
		cin>>n>>k;
		set<int> s;
		for(i=0;i<n;i++)
		{   
			int a;
			cin>>a;
			s.insert(a);
		}
        
        int cont=-1;
        int k0=*s.rbegin();
		set <int> :: iterator itr;
        itr=s.begin();
		for(i=0;i<k0;i++)
		{
            if(i==*itr)
            {   
            	itr++;
            	continue;
            }
            else
            {   
            	if(k>0)
            	{   
            		k--;
            		continue;
            	}
            	else if(k==0)
            	{	
            	if(cont<i)
            	cont=i;
                break;
                }
            }
		}
        if(k==0 && i<k0)
		cout<<cont<<endl;
	    else
	    cout<<k0+k+1<<endl;	
	}
}