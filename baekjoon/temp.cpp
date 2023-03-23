#include<bits/stdc++.h>
using namespace std;
string s;
bool is_aeiou(char c) {
	return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
int main() {
	while(true) {
		cin >> s;
		if(s == "end")break;
		bool aeiou = false;
		bool success = true;
		int cnt1 = 0, cnt2 = 0;
		char _prev = -1;
		for(int i = 0; i < s.size(); i++) {

			if(!aeiou) aeiou = is_aeiou(s[i]);

			if(is_aeiou(s[i])) {
				cnt2 = 0;
				cnt1++;
				if(cnt1 >= 3) {
					success = false;
				}
			} else {
				cnt1 = 0;
				cnt2++;
				if(cnt2 >= 3) {
					success = false;
				}
			}

			if(s[i] == _prev && (s[i] != 'e' && s[i] != 'o')){
				success = false;
			}
			_prev = s[i];
		}
		if(!aeiou) success = false;
		if(success) {
			cout << "<" << s << "> is acceptable.\n";
		} else {
			cout << "<" << s << "> is not acceptable.\n";
		}
	}
	return 0;
}