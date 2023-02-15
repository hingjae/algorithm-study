#include<bits/stdc++.h>
using namespace std;
int t, n;
string name, part;
int main() {
	cin >> t;
	while(t--) {
		map<string, int> mp;
		cin >> n;
		for(int i = 0; i < n; i++ ) {
			cin >> name >> part;
			mp[part]++;
		}
		int ret = 1;
		for(auto a : mp) {
			ret *= (a.second + 1);
		}
		cout << ret - 1 << "\n";
	}
}
