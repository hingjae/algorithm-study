#include<bits/stdc++.h>
using namespace std;
multiset<int> s;
int main() {
	s.insert(12);
	s.insert(9);
	s.insert(17);
	s.insert(2);
	s.insert(3);
	s.insert(1);
	s.insert(6);
	
	cout << "multiset Á¤·Ä\n";
	for(auto it = s.begin(); it != s.end(); it++)
		cout << *it << ' ';
	cout << '\n';
	
	auto it1 = s.find(1);
	auto it2 = s.find(9);
	
	cout << *it1 << " " << *it2 << "\n";
//	s.erase(it1, it2);
	
//	cout << "Multiset Elements after erase:\n"
}
