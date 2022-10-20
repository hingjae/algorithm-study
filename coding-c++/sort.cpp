#include<bits/stdc++.h>
using namespace std;

vector<int> a;
int b[5];

int main() {
	for(int i = 5; i >= 1; i--) b[i - 1] = i;
	for(int i = 5; i >= 1; i--) a.push_back(i);
	for(int i : b) cout << i << " ";
	cout << "\n";
	for(int i : a) cout << i << " ";
	cout << "\n"; 
	//오름차순
	cout << "=== sort ===" << "\n";
	sort(b, b+5);
	sort(a.begin(), a.end());
	for(int i : b) cout << i << " ";
	cout << "\n";
	for(int i : a) cout << i << " ";
	cout << "\n"; 
	
	cout << "=== less sort ===" << "\n";
	sort(b, b + 5, less<int>());
	sort(a.begin(),a.end(), less<int>());
	for(int i : b) cout << i << ' ';
	cout << '\n';
	for(int i : a) cout << i << ' ';
	cout << '\n';
	
	cout << "=== 내림차순  sort ===" << "\n";
	sort(b, b + 5, greater<int>());
	sort(a.begin(),a.end(), greater<int>());
	for(int i : b) cout << i << ' ';
	cout << '\n';
	for(int i : a) cout << i << ' ';
	cout << '\n';
	
	return 0;
}
