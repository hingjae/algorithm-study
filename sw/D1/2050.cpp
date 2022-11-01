#include<bits/stdc++.h>
using namespace std;

string str;
int main(){
	cin >> str;
	for(int i = 0; i < str.length(); i++){
		cout << str[i] - 64 << " ";
	}
	return 0;
}
