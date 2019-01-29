#include <bits/stdc++.h>
using namespace std;

int main(){

	long long int arr[1100];
	int cnt=0;
	for(int i=0;i<=31;i++){
		long long int a = pow(2,i);
		for(int j=0;j<=31;j++){
			// if(i!=j){
			arr[cnt] = a + pow(2,j);
			cnt++;
		// }
		}
	}

	sort(arr,arr + cnt);
	int t;cin>>t;

	

	while(t--){
		long long int n;
		cin>>n;
		int ind;
		for(int i=0;i<cnt;i++){
			if(arr[i]>=n){
				ind = i;
				break;
			}
		}

		long long int mini;
		if(ind==0){
			mini = abs(n-arr[ind]);
		}
		else
		mini = min(abs(arr[ind]-n),abs(arr[ind-1]-n));

		cout<<mini<<endl;
		
	}


}


// long long int temp = n;

// 		long long int mini = INT_MAX;
// 		int ind1,ind2;
// 		for(int i=0;i<=31;i++){
// 			long long int k = temp - (int)(pow(2,i));

			
// 			// long long int t= INT_MAX;
// 			for(int j=0;j<=31;j++){
// 				if(j!=i){
// 				long long int r=k - (int)(pow(2,j));
// 				r = abs(r);
// 				if(mini>r){
// 					mini=r;
// 					ind2=j;
// 					ind1 =i;
// 				}
				
// 			}
// 			}
// 			// if(mini>t){
// 			// 	mini = t;
// 			// 	ind1=i;
// 			// }
// 			// mini = min(mini,t);
// 		}

// 		// cout<<mini<<" "<<ind1<<" "<<ind2<<endl;

// 		cout<<mini<<endl;