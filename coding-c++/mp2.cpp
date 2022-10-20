#include<bits/stdc++.h>
using namespace std;

map<int, int> mp;
map<string, string> mp2;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	// map은 인덱스에 참조만 해도 값이 생김  
	// 0으로 초기화 
	cout << mp[1] << '\n';
	
	// 빈문자열로 초기화 
	cout << mp2["aaa"] << '\n';
	
	for(auto i : mp) cout << i.first << " " << i.second;
	cout << '\n';
	for(auto i : mp2) cout << i.first << " " << i.second;
	
	return 0;
}
