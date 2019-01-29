#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;cin>>n;
    long long int h;cin>>h;
    long long int a,b;cin>>a>>b;
    long long int k;cin>>k;
    while(k){
    	long long int ta,fa,tb,fb;
    	cin>>ta>>fa>>tb>>fb;
    	long long int ans;

    	if(ta==tb){
    		ans = abs(fa-fb);
    	}
    	else
    	{	
    	if(a<=fa && fa<=b){
    		ans = abs(tb-ta) + abs(fb-fa); 
    	}

    	
    	else if(fa<a){
    		
    				ans = abs(fa-a) + abs(fb-a) + abs(tb-ta);
    			
    			
    		}

    		else {
    			
    				ans = abs(fa-b) + abs(fb-b) + abs(tb-ta);
    			
    		}
    	
    	}

    	cout<<ans<<endl;
    	k--;
    }

	
     return 0;
}