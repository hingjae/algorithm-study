#include<bits/stdc++.h>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int t, m, n, k, a[54][54], visited[54][54], ret; // 가로 m, 세로 n 
void dfs(int y, int x) {
	visited[y][x] = 1;
	for(int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || nx < 0 || ny >= n || nx >= m || a[ny][nx] == 0) continue;
		if(visited[ny][nx] == 1) continue;
		dfs(ny, nx);
	}
	return;
}
int main() {
	cin >> t;
	while(t--) {
		cin >> m >> n >> k;
		ret = 0;
		
		fill(&a[0][0], &a[0][0] + 54 * 54, 0);
		fill(&visited[0][0], &visited[0][0] + 54 * 54, 0);
		
		for(int i = 0; i < k; i++) {
			int x, y;
			cin >> x >> y;
			a[y][x] = 1;
		}
		
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				if(a[i][j] == 1 && visited[i][j] == 0) {
					ret++; dfs(i, j);
				}
			}
		}
		cout << ret << "\n";
	}
	return 0;
}
