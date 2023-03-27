#include<bits/stdc++.h>
using namespace std;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int r, c, visited[1004][1004], fire_visited[1004][1004], y, x, ny, nx;
string s;
char a[1004][1004];
vector<pair<int, int>> fire;
pair<int, int> ji;
vector<int> ret;
int main() {

    cin >> r >> c;
    memset(fire_visited, 1000000, sizeof(fire_visited));
    for(int i = 0; i < r; i++) {
        cin >> s;
        for(int j = 0; j < c; j++) {
            a[i][j] = s[j];
            if(a[i][j] == 'F') fire.push_back({i, j});
            else if(a[i][j] == 'J') ji = {i, j};
        }
    }

    for(pair<int, int> tmp_fire : fire) {
        queue<pair<int, int>> q;
        memset(visited, 0, sizeof(visited));
        q.push({tmp_fire.first, tmp_fire.second});
        visited[tmp_fire.first][tmp_fire.second] = 1;
        while(q.size()) {
            tie(y, x) = q.front(); q.pop();
            for(int i = 0; i < 4; i++) {
                ny = y + dy[i];
                nx = x + dx[i];
                if(ny < 0 || nx < 0 || ny >= r || nx >= c) {
                    fire_visited[y][x] = min(fire_visited[y][x], visited[y][x]);
                    continue;
                }
                if(a[ny][nx] == '#' || visited[ny][nx]) continue;
                visited[ny][nx] = visited[y][x] + 1;
                q.push({ny, nx});
            }
        }
    }
    memset(visited, 0, sizeof(visited));
    queue<pair<int, int>> q;
    q.push({ji.first, ji.second});
    visited[ji.first][ji.second] = 1;
    while(q.size()) {
        tie(y, x) = q.front(); q.pop();
        for(int i = 0; i < 4; i++) {
            ny = y + dy[i];
            nx = x + dx[i];
            if(ny < 0 || nx < 0 || ny >= r || nx >= c) {
                if(fire_visited[y][x] > visited[y][x]) {
                    ret.push_back(visited[y][x]);
                }
                continue;
            }
            if(a[ny][nx] == '#' || visited[ny][nx]) continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    }

    

    if(ret.size()) {
        sort(ret.begin(), ret.end());
        cout << ret[0] << "\n";
    } else {
        cout << "IMPOSSIBLE\n";
    }
    return 0;
}