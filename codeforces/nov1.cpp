#include <bits/stdc++.h>
using namespace std;


int main()
{   
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;cin>>t;
	while(t--)
	{
		string arr;cin>>arr;
		int s=arr.size();
        int cnta=0,cntb=0,j=0;
		for(int i=0;i<s;)
		{
			
			if(arr[i]=='A')
			{
				cnta++;
                i++;
			}
			else if(arr[i]=='B')
			{
				cntb++;
				i++;
			}
			else
			{   
				j=i-1;
				int cut=0;
				while(arr[i]=='.' && i<s)
				{
                    i++;
                    cut++;
                }
                
                if(j==-1 || i==s)
                {
                	continue;
                }
                if(arr[j]=='A' && arr[i]=='A')
                {
                	cnta+=cut;
                }
                else if(arr[j]=='B' && arr[i]=='B')
                {
                	cntb+=cut;
                }
			}	

		}

        cout<<cnta<<" "<<cntb<<endl;
	}
}