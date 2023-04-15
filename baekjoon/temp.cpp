#include<bits/stdc++.h>
using namespace std;
map<int, int> mp;
int main() {
	cout << mp[0] << "\n";
	cout << mp[1] << "\n";
	for(auto item : mp) {
		cout << item.first << " " << item.second << "\n";
	}
	return 0;
}