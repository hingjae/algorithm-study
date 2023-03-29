#include<bits/stdc++.h>
using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int m, n, k, a[104][104], visited[104][104], ret, cnt;
int tempX1, tempY1, tempX2, tempY2;
vector<int> v;

void dfs(int y, int x) {
	
	visited[y][x] = 1;
	cnt++;
	
	for(int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || nx < 0 || ny >= m || nx >= n) continue;
		if(!visited[ny][nx] && a[ny][nx] == 0) {
			dfs(ny, nx);
		}
	}
	
}
int main() {
	cin >> m >> n >> k;
	
	while(k--) {
		cin >> tempX1 >> tempY1 >> tempX2 >> tempY2;
		for(int i = tempY1; i < tempY2; i++) {
			for(int j = tempX1; j < tempX2; j++) {
				a[i][j] = 1;
			}
		}
	}

	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			if(!visited[i][j] && a[i][j]==0) {
				ret++; dfs(i, j);
				v.push_back(cnt);
				cnt = 0;
			}
		}
	}
	
	cout<< ret <<"\n";
	sort(v.begin(), v.end());
	for(int item : v) {
		cout << item << " ";
	}
	return 0;
}
