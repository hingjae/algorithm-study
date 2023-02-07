#include<bits/stdc++.h>
using namespace std;
string s, r_s;

int main() {
	cin >> s;
	r_s = s;
	reverse(r_s.begin(), r_s.end());
	if(s == r_s) {
		cout << 1 << "\n";
	} else {
		cout << 0 << "\n";
	}
	return 0;
}
