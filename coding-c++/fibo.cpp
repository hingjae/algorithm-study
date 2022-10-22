#include<bits/stdc++.h>
using namespace std;

int fibo(int n) {
	cout << "fibo " << n << '\n';
	if(n == 1 || n == 0) return n;
	return fibo(n - 1) + fibo(n - 2);
}

int main() {
	int n = 4;
	cout << fibo(n) << '\n';
	return 0;
}
