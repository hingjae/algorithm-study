#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> v;

int main(){
	for(int i = 10; i >= 1; i--) {
		v.push_back({i, 10 - i});
	}
	sort(v.begin(), v.end());
	// auto는 자료형이 정해지지 않았음을 뜻함. 
	for(auto it : v) cout << it.first << " : " << it.second << "\n";
	return 0;
} 
