#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;cin>>t;
  while(t--)
  {
    int n,i,prev,k;cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
      cin>>arr[i];
      arr[i]=2*arr[i];
    }
    k=arr[0];
    for(i=1;i<n;i++)
    {
      k=k^arr[i];
    }

    cout<<k<<endl;
  }
}
