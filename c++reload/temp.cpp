#include<bits/stdc++.h>
using namespace std;
<<<<<<< HEAD
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
=======
int n;
string p;
int main() {
	cin >> n;
	cin >> p;
	// find, reverse, sub_str
	int pos = p.find("*");
	string div1 = p.substr(0, pos);
	string div2 = p.substr(pos + 1);
	for(int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if(s.size() < div1.size()+div2.size()) {
			cout << "NE" << "\n";
		} else {
			if(div1 == s.substr(0, pos) && div2 == s.substr(s.size() - div2.size())) {
				cout << "DA" << "\n";
		} else {
			cout << "NE" << "\n";
		}
		}
	}
	return 0;
}
>>>>>>> 0bef11e64f7e31bc0d86cf2c8f75e5c040d2e3fd
