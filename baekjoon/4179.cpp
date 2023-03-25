#include<bits/stdc++.h>
using namespace std;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int r, c, visited[1004][1004], fi_visited[1004][1004], y, x, ny, nx;
char a[1004][1004];
string s;
pair<int, int> ji, fi; // ret은 도착지점 좌표
vector<pair<int, int>> ret;
queue<pair<int, int>> q;

void bfs(int start_y, int start_x) {
    visited[start_y][start_x] = 1;
    q.push({start_y, start_x});
    while(q.size()) {
        tie(y, x) = q.front(); q.pop();
        for(int i = 0; i < 4; i++) {
            ny = y + dy[i];
            nx = x + dx[i];
            if(ny < 0 || nx < 0 || ny >= r || nx >= c) {
                ret.push_back({y, x});
                continue;
            }
            if(a[ny][nx] == '#' || a[ny][nx] == 'F' || visited[ny][nx]) continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    }
    return;
}
int main() {
    cin >> r >> c;
    for(int i = 0; i < r; i++) {
        cin >> s;
        for(int j = 0; j < c; j++) {
            a[i][j] = s[j];
            if(s[j] == 'J') ji = {i, j};
            if(s[j] == 'F') fi = {i, j};
        }
    }
    bfs(ji.first, ji.second);
    fi_visited[fi.first][fi.second] = 1;
    q.push({fi.first, fi.second});
    while(q.size()) {
        tie(y, x) = q.front(); q.pop();
        for(int i = 0; i < 4; i++) {
            ny = y + dy[i];
            nx = x + dx[i];
            if(ny < 0 || nx < 0 || ny >= r || nx >= c) {
                continue;
            }
            if(a[ny][nx] == '#' || a[ny][nx] == 'F' || fi_visited[ny][nx]) continue;
            fi_visited[ny][nx] = fi_visited[y][x] + 1;
            q.push({ny, nx});
        }
    }
    int result = 0;
    for(pair<int, int> item : ret) {
        if(visited[item.first][item.second] < fi_visited[item.first][item.second]) {
            result = visited[item.first][item.second];
            break;
        }
    }
    if(result) {
        cout << result << "\n";
    } else {
        cout << "IMPOSSIBLE\n";
    }
    return 0;
}