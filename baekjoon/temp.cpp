#include<bits/stdc++.h>
using namespace std;
int n, m, j, cnt;
int main() {
	cin >> n >> m >> j;
	int l, r;
	l = 1;
	for(int i = 0; i < j; i++) {
		int tmp;
		cin >> tmp;
		r = l + m - 1;
		if(tmp >= l && tmp <= r) continue;
		if(tmp < l) {
			cnt += l - tmp;
			l = tmp;
		} else {
			cnt += tmp - r;
			l = l + tmp - r;
		}
	}
	cout << cnt << "\n";
	return 0;
}