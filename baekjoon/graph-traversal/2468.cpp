#include<bits/stdc++.h>
using namespace std;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int n, a[101][101], visited[101][101], maxCnt, cnt, ret = 1;

void dfs(int y, int x, int h) {
	visited[y][x] = 1;	
	for(int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		
		if(ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
		if(!visited[ny][nx] && a[ny][nx] > h) {
			dfs(ny, nx, h);
		}
	}
	return;
}
int main() {
	
	cin >> n;
	int maxH = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> a[i][j];
			if(maxH < a[i][j]) maxH = a[i][j];
		}
	}
	
	for(int h = 1; h < 101; h++) {
		cnt = 0;
		fill(&visited[0][0], &visited[0][0] + 101 * 101, 0);
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				if(a[i][j] > h && !visited[i][j]) {
					cnt++;
					dfs(i, j, h);
				}
			}
		}
		ret = max(ret, cnt);
	}
	
	cout << ret << "\n";
	return 0;
}
