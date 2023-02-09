#include<bits/stdc++.h>
using namespace std;
int n;
string p, div1, div2;
int main() {
	cin >> n >> p;
	int pos = p.find("*");
	div1 = p.substr(0, pos);
	div2 = p.substr(pos + 1);
	for(int i = 0; i < n; i++) {
		string text;
		cin >> text;
		if(div1.size() + div2.size() > text.size()) {
			cout << "NE\n";
		} else {
			if(div1 == text.substr(0, div1.size()) && div2 == text.substr(text.size() - div2.size())) {
				cout << "DA\n";
			} else {
				cout << "NE\n";
			}
		}

	}
	return 0;
}
