#include<bits/stdc++.h>
using namespace std;
string s, ret;
int main() {
	getline(cin, s);
	for(char c : s) {
		if((c >= 65 && c <= 77) || (c >= 97 && c <= 109)) {
			ret += c + 13;
		}
		else if((c >= 78 && c <= 90) || (c >= 110 && c <= 122)) {
			ret += c - 13;
		}
		else {
			ret += c;
		}
	}
	cout << ret << "\n";
	return 0;
}
