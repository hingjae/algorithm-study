#include<bits/stdc++.h>
using namespace std;

string str;
int main() {
	cin >> str;
	for(int i = 0; i < str.length(); i++){
		if(str[i] >= 97 && str[i] <= 122){
			cout << (char)(str[i] - 32);
			continue;
		}
		cout << str[i];
	}
	return 0;
}
