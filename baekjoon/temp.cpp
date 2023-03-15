#include<bits/stdc++.h>
using namespace std;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int m, n, k, a[104][104], visited[104][104], ny, nx, x_1, x_2, y_1, y_2, cnt; // m == 세로  n == 가로 
vector<int> v;
void dfs(int y, int x) {
	visited[y][x] = 1;
	for(int i = 0; i < 4; i++) {
		ny = y + dy[i];
		nx = x + dx[i];
		
		if(ny < 0 || nx < 0 || ny >= m || nx >= n) continue;
		if(visited[ny][nx] == 1 || a[ny][nx] == 1) continue;
		cnt++;
		dfs(ny, nx);
	}
	return;
}

int main() {
	cin >> m >> n >> k;
	
	for(int i = 0; i < k; i++) {
		cin >> x_1 >> y_1 >> x_2 >> y_2;
		for(int j = y_1; j < y_2; j++) {
			for(int l = x_1; l < x_2; l++) {
				a[j][l] = 1;
			}
		}
	}
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			cnt = 0;
			if(a[i][j] == 0 && visited[i][j] == 0) {
				cnt++;
				dfs(i, j);
				v.push_back(cnt);
			}
		}
	}
	sort(v.begin(), v.end());
	cout << v.size() << "\n";
	for(auto item : v) { 
		cout << item << " ";
	}
	return 0;
}
