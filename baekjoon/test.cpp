#include<bits/stdc++.h>
using namespace std;

string s;
int main(){
	cin >> s;
	int i = s.find('*');
	cout << s.substr(0, i) << '\n';
	cout << s.substr(i+1, s.size());	
}
