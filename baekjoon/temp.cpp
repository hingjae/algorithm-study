#include<bits/stdc++.h>
using namespace std;
int asum, bsum, n, team, _time, _prev;
string str_time;
map<int, int> mp;
int strToInt(string s) {
	return atoi(s.substr(0, 2).c_str()) * 60 + atoi(s.substr(3, 5).c_str());
}
string intToStr(int n) {
	string mm = to_string(n / 60);
	string ss = to_string(n % 60);

	if(mm.size() == 1) {
		mm = "0" + mm;
	}
	if(ss.size() == 1) {
		ss = "0" + ss;;
	}
	return mm + ":" + ss;
}
int main() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> team >> str_time;
		_time = strToInt(str_time);
		if(mp[1] > mp[2]) {
			asum += _time - _prev;
		}
		else if(mp[1] < mp[2]) {
			bsum += _time - _prev;
		}
		mp[team]++;
		_prev = _time;
	}

	if(mp[1] > mp[2]) {
		asum += strToInt("48:00") - _prev;
	}
	if(mp[1] < mp[2]) {
		bsum += strToInt("48:00") - _prev;
	}

	cout << intToStr(asum) << "\n" << intToStr(bsum) << "\n";

	return 0;
}