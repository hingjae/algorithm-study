#include<bits/stdc++.h>
using namespace std;
int h, w, cnt;
string s;
bool flag;
vector<int> v;
int main() {
	cin >> h >> w;
	for(int i = 0; i < h; i++) {
		cin >> s;
		flag = 0; cnt = 0;
		for(int j = 0; j < s.size(); j++) {
			if(s[j] == '.') {
				if(flag) v.push_back(cnt++);
				else v.push_back(-1);
			}
			else {
				flag = 1;
				cnt = 0;
				v.push_back(cnt++);
			}
		}
		for(int i : v) {
			cout << i << " ";
		}
		cout << "\n";
		v.clear();
	}
	return 0;
}