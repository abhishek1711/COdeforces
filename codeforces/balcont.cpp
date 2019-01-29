#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i0=0;i0<t;i0++)
	{
		long int n,p,i,j,cont1=0,cont2=0;
		cin>>n>>p;
        for(i=0;i<n;i++)
        {
        	long int a;
        	cin>>a;
        	if(a>=p/2)
                cont1++;
            else if(a<=p/10)
            	cont2++;
        }

        if(cont1==1 && cont2==2)
        {
        	cout<<"yes"<<endl;
        }
        else
        	cout<<"no"<<endl;
	}
}