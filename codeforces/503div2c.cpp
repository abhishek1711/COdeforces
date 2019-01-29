#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n,m;cin>>n>>m;
    vector<pair<long long int,long long int> > v;
    int arr[n][2];
    map<long long int,long long int> ma;
    for(long long int i=0;i<n;i++){
    	long long int a,b;cin>>a>>b;
    	if(ma.find(a) == ma.end()){
    		ma[a] = 1;
    	}
    	else
    		ma[a]++;
    	arr[i][0] = a;
    	arr[i][1] = b;
    }

    int stor[n];
    int cnt=0;
    for(long long int i =0 ;i<n;i++){
    	if(arr[i][0]!=1){
    		stor[cnt] = arr[i][1];
    		cnt++; 
    	}

    }

    map<long long int,long long int>:: iterator itr;
    map<long long int,long long int>:: iterator itr1;
    sort(stor,stor + cnt);
    long long int sum=0;
    long long int maxi = INT_MAX;
    // for(itr = ma.begin();itr!=ma.end();itr++){
    // 	if((itr->second) > maxi){
    // 		maxi = itr->second;
    // 		itr1 = itr;
    // 	}
    // }
    if(itr->first == 1){
    	cout<<0;
    }


    else{
    	if(ma.find(1) == ma.end())
    	{
    		// long long int val = itr->second;
    		for(long long int i=0;i<maxi + 1;i++){
    			sum = sum + stor[i];
    		}
    	}

    	else
    	{
    		long long int val = maxi +1 - ma[1];
    		for(long long int i=0;i<val;i++){
    			sum = sum + stor[i];
    		}
    	}

    	cout<<sum;	
    }


}    