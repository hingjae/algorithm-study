#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m, a[10][10];
	string s;
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> s;
		for(int j = 0; j < m; j++) {
			a[i][j] = s[j] - '0'; // ���ڿ��� �Է� �޾� int������ �ٲ���. 
		}
	}
	cout << '\n';
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << a[i][j];
		}
		cout << '\n';
	}
}
