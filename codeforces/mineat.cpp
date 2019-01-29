#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;cin>>t;
  while(t--)
  {
    long int n,h,i,j;cin>>n>>h;
    long int pil[n];
    for(i=0;i<n;i++)
    {
      cin>>pil[i];
    }

    long int mini=1000000002;
    for(i=1;i<10001;i++)
    {
      long int cunt=0;

      for(j=0;j<n;j++)
      {
        if(pil[j]<=i)
        {
          cunt++;
        }
        else
        {
          cunt=cunt + (pil[j]/i) + 1;
        }
      }
      if(cunt<=h)
      {
        mini=i;
        break;
      }
    }

    cout<<mini<<endl;
  }
}
