#include<bits/stdc++.h>
using namespace std;

map<string, int> mp;
int main() {
	// ��� 1 
	mp.insert({"test1", 1});
	// ��� 2
	mp.emplace("test5", 5);
	// ��� 3 ���� �߰����
	mp["test1"] = 4;
	
	for(auto element : mp) {
		cout << element.first << " : " << element.second << "\n";
	}
	
	auto search = mp.find("test1");
	if(search != mp.end()) {
		cout << "found : " << search -> first << " " << (*search).second << "\n";
	} else {
		cout << "not found.. " << "\n";
	}
	
	mp["test1"]++;
	cout << mp["test1"] << "\n";
	cout <<mp.size() <<"\n";
	mp.erase("test1");
	cout <<mp.size() <<"\n";
	
	return 0;
} 
