#include<bits/stdc++.h>
using namespace std;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int n, l, r, a[54][54], visited[54][54], ny, nx, _div, ret;
bool flag;
void dfs(int y, int x) {
    visited[y][x] = _div;
    for(int i = 0; i < 4; i++) {
        ny = y + dy[i];
        nx = x + dx[i];

        if(ny < 0 || nx < 0 || ny >= n || nx >= n || visited[ny][nx]) continue;
        if(abs(a[ny][nx] - a[y][x]) >= l && abs(a[ny][nx] - a[y][x]) <= r) {
            flag = 1;
            dfs(ny, nx);
        }
    }
    return;
}
int main() {

    cin >> n >> l >> r;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    while(true) {
        _div = 0;
        memset(visited, 0, sizeof(visited));
        flag = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(!visited[i][j]) {
                    _div++;
                    dfs(i, j); 
                }
            }
        }

        if(flag == 0) {
            break;
        }
        ret++;

        map<int, int> mp_sum;
        map<int, int> mp_div;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                mp_sum[visited[i][j]] += a[i][j];
                mp_div[visited[i][j]]++;
            }
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                a[i][j] = mp_sum[visited[i][j]] / mp_div[visited[i][j]];
            }
        }

    }

    cout << ret << "\n";
    return 0;
}