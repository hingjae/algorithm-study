#include<bits/stdc++.h>
using namespace std;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int n, m, a[104][104], visited[104][104], ny, nx, cnt_c, cnt_h, _prev;
void dfs(int y, int x) {
	visited[y][x] = 1;
	for(int i = 0; i < 4; i++) {
		ny = y + dy[i];
		nx = x + dx[i];
		if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
		if(visited[ny][nx])continue;
		if(a[ny][nx] == 1) {
			visited[ny][nx] = 1;
			a[ny][nx] = 2;
			continue;
 		}
		dfs(ny, nx);
	}
}
int main() {
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	while(true) {
		dfs(0, 0);
		cnt_c = 0;
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				if(a[i][j] == 2) {
					cnt_c++;
					a[i][j] = 0;
				}
			}
		}
		if(!cnt_c) {
			break;
		}
		memset(visited, 0, sizeof(visited));
		_prev = cnt_c;
		cnt_h++;
	}
	
	cout << cnt_h << "\n" << _prev << "\n";
	
	return 0; 
}
