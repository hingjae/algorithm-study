#include<bits/stdc++.h>
using namespace std;
// 조합과 여러가지 vector, pair 자료구조 사용
pair<int, int> ret;
vector<int> v;
int arr[9], sum;
void solve() {
	for(int i = 0; i < 9; i++) {
		for(int j = 0; j < i; j++) {
			if(sum - arr[i] - arr[j] == 100) {
				ret = {i, j};
				return;
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	for(int i = 0; i < 9; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	solve();
	for(int i = 0; i < 9; i++) {
		if(i == ret.first || i == ret.second) continue;
		v.push_back(arr[i]);
	}
	sort(v.begin(), v.end());
	for(int i : v) cout << i << "\n";
	return 0;
}
