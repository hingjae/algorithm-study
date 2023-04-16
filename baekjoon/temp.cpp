#include<bits/stdc++.h>
using namespace std;
int n, m, a[104];
int main() {
	cin >> n >> m;
	for(int i = 0; i < m; i++) {
		int ii, jj, kk;
		cin >> ii >> jj >>kk;
		for(int j = ii; j <= jj; j++) {
			a[j] = kk;
		}
	}
	for(int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}
	cout << "\n";
	return 0;
}