#include<bits/stdc++.h>
using namespace std;
int a[9][9], mx = 0;
pair<int, int> ret;
int main() {
	for(int i = 0; i < 9; i++) {
		for(int j = 0; j < 9; j++) {
			int tmp;
			cin >> tmp;
			a[i][j] = tmp;
			mx = max(mx, a[i][j]);
		}
	}
	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 9; j++) {
			if(a[i][j] == mx) {
				ret = {i + 1, j + 1};
			}
		}
	}
	cout << mx << "\n";
	cout << ret.first << " " << ret.second << "\n";
	return 0;
}