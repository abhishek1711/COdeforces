#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;cin>>t;
  while(t--)
  {
    long int n,i,j,fon=0,bac=0;cin>>n;
    long int fing[n],glov[n];
    for(i=0;i<n;i++)
    {
      cin>>fing[i];
    }
    for(j=0;j<n;j++)
    {
      cin>>glov[j];
    }
    for(i=0;i<n;i++)
    {
      if(fing[i]<=glov[i])
      {
        fon++;
      }
      if(fing[i]<=glov[n-i-1])
      {
        bac++;
      }
    }
    if(fon==n && bac==n)
    {
      cout<<"both"<<endl;
    }
    else if(fon!=n && bac==n)
    {
      cout<<"back"<<endl;
    }
    else if(fon==n && bac!=n)
    {
      cout<<"front"<<endl;
    }
    else
    {
      cout<<"none"<<endl;
    }
  }

  return 0;
}
