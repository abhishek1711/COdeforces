#include <bits/stdc++.h>
using namespace std;

int main()
{
  long int t;cin>>t;
  while(t--)
  {
    long int m,n,i,j,suma=0,sumb=0,result=0;cin>>m>>n;
    long int a[m],b[m];
    for(i=0;i<m;i++)
    {
      cin>>a[i];
      suma=suma+a[i];
    }
    for(i=0;i<m;i++)
    {
      cin>>b[i];
      sumb=sumb+b[i];
    }

      long int fiba[n],fibb[n];
      fibb[0]=0;
      fiba[0]=1;
      if(n>1)
      {
        fibb[1]=1,fiba[1]=0;
      }
      for(i=2;i<n;i++)
      {
        fibb[i]=fibb[i-1]+fibb[i-2];
        fiba[i]=fiba[i-1]+fiba[i-2];
      }
      result= m*((fiba[n-1]*suma) + (fibb[n-1]*sumb));

    cout<<result%1000000007<<endl;
  }
}
