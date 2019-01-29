#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;cin>>t;
  while(t--)
  {
    long int n,i,j;cin>>n;
    long int clr[n];
    map<long int,long int> inp;
    map<long int,long int> :: iterator it;
    long int sum=0;
    for(i=0;i<n;i++)
    {
      cin>>clr[i];
      if(inp.count(clr[i])==0)
      {
        inp[clr[i]]=1;
      }
      else
      inp[clr[i]]=inp[clr[i]] + 1;
    }

    for(it=inp.begin();it!=inp.end();++it)
    {
      sum=sum+it->second -1;
    }

    cout<<sum<<endl;

  }
}
