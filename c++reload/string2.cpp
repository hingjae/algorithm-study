#include <bits/stdc++.h>
using namespace std;
int main() {
	string a = "love is";
	a += " pain!";
	a.pop_back();
	cout << a << " : " << a.size() << "\n";
	a.insert(0, "test "); 
	cout << a << " : " << a.size() << "\n";
	a.erase(0, 5);
}
