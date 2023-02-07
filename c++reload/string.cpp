#include<bits/stdc++.h>
using namespace std;

int main() {
	string a = "나는야";
	cout << a[0] << "\n";
	cout << a[0] << a[1] <<  a[2] << '\n'; //한글은 한글자당 3바이트 
	cout << a << '\n';
	string b = "abc";
	cout << b[0] << "\n"; // 영어는 한글자당 1 바이트 
	cout << b << "\n";
	return 0;
}
