#include<bits/stdc++.h>
using namespace std;
int t, n, ret2, ret5;
int main() {
	cin >> t;
	while(t--) {
		cin >> n;
		ret2 = 0; ret5 = 0;
		for(int i = 2; i <= n; i *= 2) {
			ret2 += n / i;
		}
		for(int i = 5; i <= n; i *= 5) {
			ret5 += n / i;
		}
		
		cout << min(ret2, ret5) << "\n";
	}
	return 0;
}
