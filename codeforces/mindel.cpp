#include <bits/stdc++.h>
using namespace std;

// Function to return gcd of a and b
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

// Function to find gcd of array of
// numbers
int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
        result = gcd(arr[i], result);

    return result;
}

// Driven code
int main()
{
    int t;cin>>t;
    while(t--)
    {
      int n,i;cin>>n;
      int arr[n];
      for(i=0;i<n;i++)
      {
        cin>>arr[i];
      }
      if(findGCD(arr, n)==1)
      {
        cout<<"0"<<endl;
      }
      else
      cout<<"-1"<<endl;
    }
    return 0;
}
