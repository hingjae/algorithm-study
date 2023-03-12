#include<bits/stdc++.h>
using namespace std;
string s, tmp;
int n;
vector<string> v;
bool cmp(string a, string b) {
	if(a.size() == b.size()) {
		return a < b;
	}
	return a.size() < b.size();
}
void go() {
	while(true) {
		if(tmp.size() && tmp.front() == '0') tmp.erase(tmp.begin());
		else break;
	}
	if(tmp.size() == 0) tmp = "0";
	v.push_back(tmp);
	tmp = "";
} 
int main() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> s;
		tmp = "";
		for(int j = 0; j < s.size(); j++) {
			if(s[j] < 65) tmp += s[j];
			else if(tmp.size()) go();
		}
		if(tmp.size()) go();
	}
	sort(v.begin(), v.end(), cmp);
	for(auto item : v) {
		cout << item << "\n";
	}
	return 0;
}
