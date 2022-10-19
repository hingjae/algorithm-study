#include<bits/stdc++.h>
using namespace std;
string s;
int T;
int main() {
	cin >> T;
	string bufferflush;
	getline(cin, bufferflush);
	for(int i = 0; i < T; i++) {
		getline(cin, s);
		cout << s << '\n';
	}
	return 0;
}
