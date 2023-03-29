#include<bits/stdc++.h>
using namespace std;
int n, m, j, l, r, ret;
int main() {
	cin >> n >> m >> j;
	l = 1;
	for(int i = 0; i < j; i++) {
		int tmp;
		cin >> tmp;
		r = l + m - 1;
		if(tmp >= l && tmp <= r) continue;
		else {
			if(tmp < l) {
				ret += l - tmp;
				l = tmp;
			} else {
				ret += tmp - r;
				l += tmp - r;
			}
		}
	}
	cout << ret << "\n";
	return 0;
}
