#include<bits/stdc++.h>
using namespace std;
int arr[9], sum;
vector<int> v;
pair<int, int> ret;
void solve() {
	for(int i = 0 ; i < 9; i++) {
		for (int j = 0; j < i; j++) {
			if(sum - arr[i] - arr[j] == 100) {
				ret = {i, j};
				return;
			}
		}
	}
}
int main() {
	for(int i = 0; i < 9; i++) {
		cin >> arr[i]; sum += arr[i];
	}
	solve();
	for(int i = 0; i < 9; i++){
		if(ret.first == i || ret.second == i) {
			continue;
		}
		v.push_back(arr[i]);
	}
	sort(v.begin(), v.end());
	for(int a : v) {
		cout << a << "\n";
	}
	return 0;
}
