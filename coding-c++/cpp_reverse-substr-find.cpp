#include<bits/stdc++.h>
using namespace std;
string s = "nickname is honey";
int main() {
	cout << s << "\n";
	if(s.find("honey") != string::npos){
		cout << "honey in string" << "\n";
	}
	cout << s.substr(0, 3) << "\n";
	reverse(s.begin()+9, s.end());
	cout << s << "\n";
	
	return 0;
}
