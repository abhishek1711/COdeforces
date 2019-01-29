#include <bits/stdc++.h>

using namespace std;

string s,m[]={"","","2","3","322","5","53","7","2227","7332"};
int main(){
	int n;cin>>n;
	long long int a;
	cin>>a;
	while(a){
		s+=m[a%10];
		a = a/10;
	}
	sort(s.rbegin(),s.rend());

	cout<<s;
	return 0;

}	