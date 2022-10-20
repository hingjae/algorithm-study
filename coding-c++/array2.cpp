#include<bits/stdc++.h>
using namespace std;

const int x = 3;
const int y = 4;

int a[x][y];

int main() {
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			a[i][j] = i+j;
		}
	}
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}
