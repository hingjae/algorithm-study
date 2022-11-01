#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, ret = 0;
	cin >> a;
	ret += (a/1000);
	a %= 1000;
	ret += (a/100);
	a %= 100;
	ret += (a/10);
	a %= 10;
	ret += a;
	cout << ret << "\n";
} 
