#include<bits/stdc++.h>
using namespace std;
int h, w, cnt;
char a[104];
bool flag;
int main() {
	cin >> h >> w;
	for(int i = 0; i < h; i++) {
		vector<int> v;
		flag = 0;
		for(int j = 0; j < w; j++) {
			cin >> a[j];
			if(a[j] == '.') {
				if(flag == 0) v.push_back(-1);
				else {
					v.push_back(++cnt);
				}
			}
			else {
				flag = 1;
				cnt = 0;
				v.push_back(cnt);
			}
		}
		for(auto item : v) {
			cout << item << " ";
		}
		cout << "\n";
	}
	
	return 0;
}
