#include <bits/stdc++.h>
using namespace std;


int main(){

	int t;cin>>t;
	while(t--){
		int n,m,k,l;
		cin>>n>>m>>k>>l;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int mini = m,ini = m;
		int mt=(m+1)*l;
		
		int ni = l;

		sort(arr,arr+n);
		

		for(int i=0;i<n;i++){



			ini = m + i;

			// int num = arr[i]/l;
			// // ini = ini - tu;


			int t = (m+i+1)*l - arr[i];
			if(t<mt){
				
				mt = t;
			}


		}

		if((m+n+1)*l - k < mt){
			mt = (m+n+1)*l - k;
		}

		cout<<mt<<endl;

	}


}


// if(arr[i]<ni){
// 				ini + 1;
// 			}
// 			if(arr[i]>ni){
// 				int tu = arr[i]/l;
				
// 			}