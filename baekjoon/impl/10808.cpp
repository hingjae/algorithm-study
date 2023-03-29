//¾ËÆÄºª °³¼ö
#include<bits/stdc++.h>
using namespace std;
string s;
int alpha[26] = {};
int main() {
	ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	cin >> s;
	for(int i = 0; i < s.length(); i++) {
		int idx;
		idx = (int)s[i] - 97;
		alpha[idx]++;
	}
	for(int i : alpha) cout << i << " ";
	return 0;
}

// cnt['a'] == cnt[97]
