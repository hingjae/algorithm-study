#include<bits/stdc++.h>
using namespace std;

int a, b, c, cnt[104], sum;
int main(){
	cin >> a >> b >> c;
	for(int i = 0; i < 3; i++) {
		ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
		int start, end;
		cin >> start >> end;
		for(int j = start; j < end; j++) {
			cnt[j]++;
		}
	}
	for(int i = 0; i < 104; i++){
		if(cnt[i] == 1) sum += a;
		else if(cnt[i] == 2) sum += (b * 2);
		else if(cnt[i] == 3) sum += (c * 3);
	}
	cout << sum << '\n';
	return 0;
} 

// 문제 잘 읽기! a, b, c는 총 비용이 아닌  트럭 한 대당 비용.. 
