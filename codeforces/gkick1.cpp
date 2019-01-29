#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;cin>>t;
  int cut=1;
  while(t--)
  {
    int n;cin>>n;
    int tika=0;
    int tikb=0;

    int an=n;
    int bn=n;
    while(1)
    {
      int ew=an;
      int kic=0;
      while(ew!=0)
      {
        int rem=ew%10;
        if(rem%2!=0)
        {
          kic=1;
          break;
        }
        ew=ew/10;
      }
      if(kic==1)
      {
        an=an-1;
      }
      else
      {
        break;
      }
    }
    while(1)
    {
      int bew=bn;
      int bkic=0;
      while(bew!=0)
      {
        int brem=bew%10;
        if(brem%2!=0)
        {
          bkic=1;
          break;
        }
        bew=bew/10;
      }
      if(bkic==1)
      {
        bn=bn+1;
      }
      else
      {
        break;
      }
    }

    cout<<"Case #"<<cut<<": "<<min(n-an,bn-n)<<endl;
    cut++;
  }
}
