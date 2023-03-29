#include<bits/stdc++.h>
using namespace std;

int a[104][104], visited[104][104];
int n, m, cnt = 1, cnt2, ny, nx;
int dy[] = {-1, 0, 1, 0}, dx[] = {0, 1, 0, -1};
bool flag;
vector<pair<int, int>> v;
void go(int y, int x) {
	visited[y][x] = 1;
	if(a[y][x] == 1) {
		v.push_back({y, x});
		return;
	}
	for(int i = 0; i < 4; i++ ){
		ny = y + dy[i];
		nx = x + dx[i];
		if(ny < 0 || nx < 0 || ny >= n || nx >= m)continue;
		if(visited[ny][nx] == 1) continue;
		go(ny, nx);
	}
	return;
}
int main() {
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	while(true) {
		flag = 0;
		cnt2 = 0;
		fill(&visited[0][0], &visited[0][0] + 104 * 104, 0);
		v.clear();
		go(0, 0);
		for(auto item : v) {
			cnt2++;
			a[item.first][item.second] = 0;
		}
		for(int i = 0; i < n; i++) {
			for(int j = 0;  j <m; j++ ){
				if(a[i][j] == 1) flag = 1;
			}
		}
		if(!flag) break;
		cnt++;
	}
	cout << cnt << "\n";
	cout << cnt2 << "\n";
	
	return 0;
}
