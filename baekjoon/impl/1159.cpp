#include<bits/stdc++.h>
using namespace std;
int n, cnt[26];
string ret;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for(int i = 0; i < n; i++){
		string tmp;
		cin >> tmp;
		cnt[tmp[0] - 'a']++;
	}
	for(int i = 0; i < 26; i++){
		if(cnt[i] >= 5) {
			ret += (char)(i + 'a');
		}
	}
	if(ret.length() == 0){
		ret = "PREDAJA";
	}
	cout << ret << '\n';
	return 0;
}
