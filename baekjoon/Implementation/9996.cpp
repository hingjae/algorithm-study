#include<bits/stdc++.h>
using namespace std;

int n;
string p, pf, sf, s;
int main() {
	cin >> n;
	cin >> p;
	int idx = p.find('*');
	pf = p.substr(0, idx);
	sf = p.substr(idx + 1); // idx + 1 부터 문자열 끝까지

	for(int i = 0; i < n; i++) {
		cin >> s;

		if(s.size() < pf.size() + sf.size()){ //반례 생각하기. 
			cout << "NE\n";
		}
		else {
			if(pf == s.substr(0, pf.size()) && sf == s.substr(s.size() - sf.size())) {
				cout << "DA\n";
			} else {
				cout << "NE\n";
			}
		}
	}

	return 0;
}
