#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> combis;
vector<int> v;
void combi(int n, int k, int idx) {

	if(v.size() == k) {
		combis.push_back(v);
		return;
	}

	for(int i = idx; i <= n; i++) {
		v.push_back(i);
		combi(n, k, i + 1);
		v.pop_back();
	}
}
int main() {

	combi(4, 2, 1);
	for(auto v : combis) { 
		for(auto item : v) {
			cout << item  << " ";
		}
		cout << "\n";
	}
	return 0;
}