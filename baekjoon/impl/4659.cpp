#include<bits/stdc++.h>
using namespace std;
string s;
bool is_include_v, flag;
int lcnt, vcnt, pre_value;
bool is_vowel(int idx) {
	return (idx == 'a' || idx == 'e' || idx == 'i' || idx == 'o' || idx == 'u');
}
int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
	while(true) {
		cin >> s;
		if(s == "end") break;
		pre_value = -1;
		is_include_v = 0; flag = 0;
		vcnt = 0; lcnt = 0;
		for(int i = 0; i < s.size(); i++) {
			int idx = s[i];
			if(!is_include_v) is_include_v = is_vowel(idx);
			if(is_vowel(idx)) { 
				vcnt++; lcnt = 0;
				if(vcnt == 3) {
					flag = 1;
					break;
				}
			} else {
				lcnt++; vcnt = 0;
				if(lcnt == 3) {
					flag = 1;
					break;	
				} 
			}
			if(idx == pre_value && (idx != 'o' && idx != 'e')) flag = 1;
			pre_value = idx;
		}
		if(!is_include_v) flag = 1;
		if(flag) cout << "<" << s << "> is not acceptable." << "\n";
		else cout << "<" << s << "> is acceptable.\n";
		
	}
	return 0;
}
