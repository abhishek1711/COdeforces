#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;cin>>t;
  while(t--)
  {
    int   n;cin>>n;
    int i,j;
    double obj[n][3];
    for(i=0;i<n;i++)
    {
      cin>>obj[i][0]>>obj[i][1]>>obj[i][2];
    }
    double sum=0.0;
    for(i=0;i<n;i++)
    {
      sum=sum+(obj[i][1]*obj[i][0]*obj[i][2]*obj[i][2])/10000;
    }
    printf("%.12lf\n",sum);
  }
}
