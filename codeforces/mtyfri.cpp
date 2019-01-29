#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;cin>>t;
  while (t--) {
    /* code */
    int n,k,i,j,t;cin>>n>>k;
    int arr[n];
    int od[n],ev[n],co=0,ce=0;

    for(i=0;i<n;i++)
    {
      cin>>arr[i];
      if(i%2==0)
      {
        od[co]=arr[i];
        co++;
      }
      else
      {
        ev[ce]=arr[i];
        ce++;
      }
    }

    sort(od,od+co);
    sort(ev,ev+ce);

    j=co-1,t=0,i=0;
    while(!(i==k || j==-1 || t==ce))
    {
      if(od[j]>ev[t])
      {
        swap(od[j],ev[t]);
      }
      j--,t++,i++;
    }
    int sum0=0,sum1=0;
    for(i=0;i<co;i++)
    {
      sum0=sum0+od[i];
    }
    for(i=0;i<ce;i++)
    {
      sum1=sum1+ev[i];
    }
    if(sum1>sum0)
    {
      cout<<"YES"<<endl;
    }
    else
    {
      cout<<"NO"<<endl;
    }
  }
}
