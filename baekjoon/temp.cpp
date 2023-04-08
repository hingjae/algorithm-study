#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> v;
int main() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	for(auto item : v) { 
		cout << item << "\n";
	}
	return 0;
}