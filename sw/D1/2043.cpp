#include<bits/stdc++.h>
using namespace std;

int p, k;
int main(){
	cin >> p >> k;
	int cnt = 1;
	while(p != k){
		k++;
		cnt++;
	}
	cout << cnt << "\n";
	return 0;
}
