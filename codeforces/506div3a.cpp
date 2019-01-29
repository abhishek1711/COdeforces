#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<pair<int,int> > vii;\


int main(){
	int n,k;cin>>n>>k;
	string t;cin>>t;
	int len = t.size();
	int r = len/2;
	int kr=-1;
	char c = t[0];
	bool tuk=true;
	for(int i=1;i<len;i++){
		if(t[i]!=c)
			tuk=false;
	}
	if(tuk){
		string ni=t;
		for(int oi=0;oi<k-1;oi++){
			ni = ni + c;
		}
		cout<<ni;
	}
	else
	{
	for(int i=r-1;i>=0;i--){
		bool flag = true;
		for(int j=0;j<=i;j++){
			if(len%2!=0){
			if(t[j]!=t[len-i-1+j])
				flag = false;
		}
		else
		{
			if(t[j]!=t[len-i-1+j])
				flag = false;
		}
		}
		if(flag)
		{
			kr = i;
			break;
		}
	}
	string s=t;
	if(kr == -1)
		{
			for(int tr=0;tr<k-1;tr++)
			{
				s = s+t;
			}

		}	
	else{

		string br="";
		for(int i = kr+1;i<len;i++){
			br = br + t[i];
		}
		for(int i=0;i<k-1;i++){
			s = s + br;
		}
	}

	cout<<s;
}

}