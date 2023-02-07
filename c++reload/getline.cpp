#include<bits/stdc++.h>
using namespace std;

int T;
string s;
int main(){
	cin >> T;
	string bufferflush;
	getline(cin, bufferflush); // getline한번 떠 쓰기전에  버퍼 플래시 
	for(int i = 0; i < T; i++) {
		getline(cin, s);
		cout << s << "\n";
	}
	return 0;
}
