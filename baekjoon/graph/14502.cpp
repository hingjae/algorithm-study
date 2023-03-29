#include<bits/stdc++.h>
using namespace std;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int n, m, a[10][10], visited[10][10], ny, nx, ret;
vector<pair<int,int>> wallList, virusList;
void dfs(int y, int x) {
    visited[y][x] = 1;
    for(int i = 0; i < 4; i++) {
        ny = y + dy[i];
        nx = x + dx[i];
        if(ny < 0 || nx < 0 || ny >= n || nx >= m)continue;
        if(visited[ny][nx] == 1 || a[ny][nx] == 1) continue;
        dfs(ny, nx);
    }
    return;
}
int solve() {
    int cnt = 0;
    for(auto item : virusList) {
        visited[item.first][item.second] = 1;
        dfs(item.first, item.second);
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(visited[i][j] == 0 && a[i][j] == 0) cnt++;
        }
    }
    return cnt;
}
int main() {
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
            if(a[i][j] == 0) wallList.push_back({i, j});
            if(a[i][j] == 2) virusList.push_back({i, j});
        }
    }
    //  벽 세우기 랜덤으로 3개의 빈공간을 골라서 세움.
    for(int i = 0; i < wallList.size(); i++) {
        for(int j = 0; j < i; j++) {
            for(int k = 0; k < j; k++) {
                a[wallList[i].first][wallList[i].second] = 1;
                a[wallList[j].first][wallList[j].second] = 1;
                a[wallList[k].first][wallList[k].second] = 1;
                ret = max(ret, solve());
                fill(&visited[0][0], &visited[0][0] + 10 * 10, 0);
                a[wallList[i].first][wallList[i].second] = 0;
                a[wallList[j].first][wallList[j].second] = 0;
                a[wallList[k].first][wallList[k].second] = 0;
            }
        }
    }
    cout << ret << "\n";
    return 0;
}