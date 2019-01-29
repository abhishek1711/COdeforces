#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main() {
	ll N; cin >> N;
	vector<ll> ans;

	for (ll i = 1; i*i <= N; ++i) {
		if (N%i==0) {
			ans.push_back(N*(i-1)/2 + i);
			if (i*i!=N) {
				cout<<(N*(N/i-1)/2 + N/i)<<endl;
				ans.push_back(N*(N/i-1)/2 + N/i);
			}
		}
	}
	sort(ans.begin(),ans.end());
	
	for (int i = 0; i < ans.size(); ++i) {
		cout << ans[i] << " ""\n"[i==ans.size()-1];
	}

}//[i==ans.size()-1]