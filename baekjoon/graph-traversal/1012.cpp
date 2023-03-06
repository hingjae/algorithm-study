#include<bits/stdc++.h>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int t, m, n, k, a[54][54], nx, ny;
bool visited[54][54];
void dfs(int y, int x) {
	visited[y][x] = 1;
	for(int i = 0; i < 4; i++) {
		nx = x + dx[i];
		ny = y + dy[i];
		
		if(nx < 0 || ny < 0 || nx >= m || ny >= n || a[ny][nx] == 0) continue;
		if(a[ny][nx] == 1 && !visited[ny][nx]) {
			dfs(ny, nx);
		}
	}
	return;
}
int main() {
	cin >> t;
	while(t--) {
		int ret = 0;
		cin >> m >> n >> k;
		
		for(int i = 0; i <  k; i++) {
			int x, y;
			cin >> x >> y;
			a[y][x] = 1;
		}
		
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				if(a[i][j] == 1 && !visited[i][j]) {
					ret++; dfs(i, j);
				}
			}
		}
		
		cout << ret << "\n";
	}
	return 0;
}
