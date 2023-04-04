#include<bits/stdc++.h>
using namespace std;
const int dy[] = {-1, 0, 1, 0};
const int dx[] = { 0, 1, 0, -1}; 
int r, c, visited[30], ny, nx, ret;
char a[21][21];
void go(int y, int x, int cnt) {
    ret = max(ret, cnt);
    for(int i = 0; i < 4; i++) {
        ny = y + dy[i];
        nx = x + dx[i];
        if(ny < 0 || ny >= r || nx < 0 || nx >= c) continue;
        int next = (int)(a[ny][nx] - 'A');

        if(visited[next] == 0) {
            visited[next] = 1;
            go(ny, nx, cnt + 1);
            visited[next] = 0;
        }
    }
    return;
}
int main() {
    cin >> r >> c;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
    visited[(int)a[0][0] - 'A'] = 1;
    go(0, 0, 1);
    cout << ret << "\n";
    return 0;
}