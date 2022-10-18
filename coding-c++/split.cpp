#include <bits/stdc++.h>
using namespace std;

vector<string> split(string input, string delimiter) {
	long long pos = 0;
	string token = "";
	vector<string> ret;
	while ((pos = input.find(delimiter)) != string::npos){
		token = input.substr(0, pos);
		ret.push_back(token);
		input.erase(0, pos + delimiter.length());
	}
	ret.push_back(input);
	return ret;
}
int main() {
	string tmp;
	cin >> tmp;
	vector<string> result = split(tmp, ",");
	for(string ret : result) cout << ret << " ";
}
