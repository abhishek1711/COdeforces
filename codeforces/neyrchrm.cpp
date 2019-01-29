#include <bits/stdc++.h>
using namespace std;

int main(){
	int y,b,r;
	cin>>y>>b>>r;
	b=b-1;r=r-2;
	if(y<=b && y<=r){
		cout<<(3*y+3);
	}
	else if(b<=y && b<=r){
		cout<<(3*(b)+3);
	}
	else{
		cout<<(3*(r)+3);
	}
	return 0;
}