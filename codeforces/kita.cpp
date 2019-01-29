// #include <bits/stdc++.h>

// using namespace std;

// bool chek(string k){
// 	int len = k.size();
// 	int i=0,j=len-1;
// 	int flag=1;
// 	while(i<j){
// 		if(k[i]!=k[j]){
// 			flag=0;
// 			break;
// 		}
// 		else{
// 			i++;
// 			j--;
// 		}
// 	}

// 	return flag;
// }


// int main(){
// 	strin

// 	return 0;


// }

#include<bits/stdc++.h>
using namespace std;
string s,ss,cc;
int main(){
	cin>>s;
	 for(int i=0;i<=s.size();i++)
	  for(char ch='a';ch<='z';ch++){
	  	ss=s;cc=ch;ss.insert(i,cc);
	  	if(ss==string(ss.rbegin(),ss.rend()))
	  		{cout<<ss;return 0;}
	  							   }
	  cout<<"NA";
}