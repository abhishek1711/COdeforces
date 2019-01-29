#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,k;
	cin>>n>>k;
	char stor[n];
    map<char,int> inp;
    map<char,int> :: iterator it;
    int maax=0;
	for(int i=0;i<n;i++)
	{
		cin>>stor[i];
		if(inp.count(char(stor[i]))==0)
        {
        	inp[char(stor[i])]=1;
        }
        else
        	inp[char(stor[i])]=inp[char(stor[i])] + 1;
	}

	if(n==0)
	{
		cout<<"YES";
	}
	else
	{
       for(it = inp.begin(); it != inp.end(); ++it )
    {
    if (it->second > maax)
    {
        maax = it->second;
    }
}
}
  if(maax>k)
  {
  	cout<<"NO";
  }
  else
  	cout<<"YES";
	}
