#include<bits/stdc++.h>
using namespace std;

void func(vector<int> &v){
	v[0] = 100;
}

void func2(vector<int> v[10]){
	v[0][0] = 1000;
}

int main(){
	vector<int> v;
	vector<int> v2[10];
	v2[0].push_back(100);
	func2(v2);
	cout << "func2" << "\n";
	for(int i : v2[0]) cout << i << " ";
	cout << "\n";
	for(int i = 1; i <= 3; i++)v.push_back(i);
	func(v);
	cout << "func1" << "\n";
	for(int i : v)cout << i << " ";
	cout << "\n";
	return 0;
}
