#include <bits/stdc++.h>
using namespace std;

int main(){
  long long int t;cin>>t;
  while(t--){
    int n,m,sum=0;cin>>n>>m;
    for(int i=0;i<n;i++){
      int a;cin>>a;
      if(a%m==0){
        sum++;
      }

    }

    cout<<(pow(2,sum) - 1)<<endl;
  }
}
