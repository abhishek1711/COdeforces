#include <bits/stdc++.h>
using namespace std;

int main(){

	int w,h,w1,h1,w2,h2;
	cin>>w>>h;
	cin>>w1>>h1;
	cin>>w2>>h2;
	

	for(int i=h;i>0;i--){
		w = w + i;
		if(i==h1){
			w = w - w1;
			if(w<0)
				w=0;
		}

		if(i==h2){
			w = w -w2;
			if(w<0)
				w=0;
		}
	}

	cout<<w;

}	