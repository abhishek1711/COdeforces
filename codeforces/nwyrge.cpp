#include <bits/stdc++.h>
using namespace std;

int main(){
	
	long long int n;cin>>n;
	long long int xy[n][2];
	long long int ab[n][2];
	long long int xyx=0,xyy=0,aba=0,abb=0;
	for(int i=0;i<n;i++){
		cin>>xy[i][0]>>xy[i][1];
		xyx = xyx+xy[i][0];
		xyy = xyy + xy[i][1];
	}
	for(int i=0;i<n;i++){
		cin>>ab[i][0]>>ab[i][1];
		aba = aba + ab[i][0];
		abb = abb + ab[i][1];
	}

	cout<<(xyx+aba)/n<<" "<<(xyy+abb)/n;
}