#include <bits/stdc++.h>
using namespace std;

int main()
{
	 ios_base::sync_with_stdio(false);
	 cin.tie(NULL);
	 int n,t,i;
	 cin>>n>>t;
     int arr[n];
	 for(i=0;i<n;i++)
	 {
	 	cin>>arr[i];
	 	arr[i]=86400-arr[i];
	 }
     
     int cont=0;
     while(t>0)
     {
       t=t-arr[cont];
       cont++;
     }

     cout<<cont;
}