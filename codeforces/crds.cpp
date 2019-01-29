#include <bits/stdc++.h>
using namespace std;

// int cntr=0,cntb=0,cntg=0;

// void rec(int arr[],int n){
// 	if(n==0){
// 		if(arr[0]!=0){
// 			cntr++;
// 			return;
// 		}
// 		else if(arr[1]!=0){
// 			cntg++;
// 			return;
// 		}
// 		else if(arr[2]!=0){
// 			cntb++;
// 			return;
// 		}
// 	}

// 	for(int i=0;i<3;i++){
// 		if(arr[i]!=0){
// 		for(int j=0;j<3;j++){
// 			if(arr[j]!=0){
// 			if(i==j){
// 				if(arr[i]>=2){
// 					arr[i]--;

// 					return rec(arr,n-1);
// 				}
// 				else
// 					continue;
// 			}
// 			else
// 			{
// 				if(i+j==1)
// 				{
// 					arr[0]--;
// 					arr[1]--;
// 					arr[2]++;
// 					return rec(arr,n-1);
// 				}
// 				if(i+j==2)
// 				{
// 					arr[0]--;
// 					arr[1]++;
// 					arr[2]--;
// 					return rec(arr,n-1);
// 				}
// 				if(i+j==3)
// 				{
// 					arr[0]++;
// 					arr[1]--;
// 					arr[2]--;
// 					return rec(arr,n-1);
// 				}
// 			}
// 		}
// 	}
// 	}
// }
// }
int main(){
	int n;cin>>n;
	string s;cin>>s;
	int arr[3]={0};
	int r=0,g=0,b=0;
	for(int i=0;i<n;i++){
		if(s[i]=='R')
			r++;
		else if(s[i]=='G')
			g++;
		else
			b++;
	}
	// cout<<arr[2];
	if((g && r) || (!g && !r) || (g >= 2 && b) || (r >= 2 && b)){cout << 'B';}
    if((b && r) || (!b && !r) || (b >= 2 && g) || (r >= 2 && g)){cout << 'G';}
    if((b && g) || (!b && !g) || (b >= 2 && r) || (g >= 2 && r)){cout << 'R';}
}