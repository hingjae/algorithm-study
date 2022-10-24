#include<bits/stdc++.h>
using namespace std;
string s;
int cnt[26]; // 배열을 전역에 선언하면 자동으로 초기화됨. 
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> s;
	for(char c : s) {
		cnt[c - 'a']++;
	}
	for(int i : cnt) cout << i << " ";
	return 0;
} 
