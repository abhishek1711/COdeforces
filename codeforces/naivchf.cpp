#include <bits/stdc++.h>
using namespace std;

int main()
{
  double t;cin>>t;
  while(t--)
  {
    double n,a,b,i,j;cin>>n>>a>>b;
    double cnta=0,cntb=0;
    for(i=0;i<n;i++)
    {
      double k;cin>>k;
      if(k==a)
        cnta++;
      if(k==b)
          cntb++;
    }

    double pa = cnta/n;double pb = cntb/n;

    cout<<pa*pb<<endl;

  }
}
