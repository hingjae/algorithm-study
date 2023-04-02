#include<bits/stdc++.h>
using namespace std;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int n, m, tmp_x, tmp_y, ny, nx, visited[304][304], cnt;
pair<int, int> jj;
pair<int, int> bb;
char a[304][304];
string s;
bool flag;
vector<pair<int, int>> v;
void dfs(int y, int x) {
    visited[y][x] = 1;
    for(int i = 0; i < 4; i++) {
        ny = y + dy[i];
        nx = x + dx[i];
        if(ny < 0 || nx < 0 || ny >= n || nx >= m)continue;
        if(a[ny][nx] == '1' || visited[ny][nx] == 1) continue;
        v.push_back({ny, nx});
        dfs(ny, nx);
    }
    return;
}
void go(int y, int x) {
    for(int i = 0; i < 4; i++) {
        ny = y + dy[i];
        nx = x + dx[i];
        if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
        if(a[ny][nx] == '#') {
            flag = true;
        }
        a[ny][nx] = '0';
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;
    cin >> tmp_x >> tmp_y;
    jj = {tmp_x - 1, tmp_y - 1};
    cin >> tmp_x >> tmp_y;
    bb = {tmp_x - 1, tmp_y - 1};

    for(int i = 0; i < n; i++) {
        cin >> s;
        for(int j = 0; j < m; j++) {
            a[i][j] = s[j];
        }
    }

    

    while(true) {
        cnt++;
        v.clear();
        v.push_back({jj.first, jj.second});
        memset(visited, 0, sizeof(visited));

        dfs(jj.first, jj.second);

        for(auto item : v) {
            go(item.first, item.second);
        }
        
        if (flag) break;

    }

    cout << cnt << "\n";

    return 0;
}