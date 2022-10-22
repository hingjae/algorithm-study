#include<bits/stdc++.h>
using namespace std;

int f1(int n) {
	int result = 1;
	for(int i = n; i > 0 ; i--){
		result *= i;
	}
	return result;
}

int f2(int n) {
	if(n == 1 || n == 0) return 1;
	return n * f2(n - 1);
}

int main() {
	int a = 10;
	
	cout << f1(a) << '\n';
	cout << f2(a) << '\n';
	
	return 0;
}
