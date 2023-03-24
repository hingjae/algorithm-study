#include<bits/stdc++.h>
using namespace std;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int n, m, visited[54][54], y, x, mx, ret;
string s;
char a[54][54];
vector<pair<int, int>> l;
int main() {
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        cin >> s;
        for(int j = 0; j < m; j++) {
            a[i][j] = s[j];
            if(a[i][j] == 'L')l.push_back({i, j});
        }
    }

    for(pair<int, int> tmp_l : l) {
        queue<pair<int, int>> q;
        fill(&visited[0][0], &visited[0][0] + 54 * 54, 0);
        q.push({tmp_l.first, tmp_l.second});
        visited[tmp_l.first][tmp_l.second] = 1;
        while(q.size()) {
            tie(y, x) = q.front(); q.pop();
            for(int i = 0; i < 4; i++) {
                int ny = y + dy[i];
                int nx = x + dx[i];

                if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
                if(visited[ny][nx] >= 1 || a[ny][nx] == 'W') continue;
                visited[ny][nx] = visited[y][x] + 1;
                q.push({ny, nx});
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                mx = max(visited[i][j], mx);
            }
        }
    }
    cout << mx - 1 << "\n";
    return 0;
}