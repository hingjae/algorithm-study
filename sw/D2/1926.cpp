#include<bits/stdc++.h>
using namespace std;

int main() {
	string str, tmp;
	int num;
	cin >> str;
	num = stoi(str);
	for(int i = 1; i <= num; i++ ){
		tmp = to_string(i);
		bool found = tmp.find("3") != string::npos;
		cout << found;
	}
	return 0;
}
