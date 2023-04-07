#include<bits/stdc++.h>
using namespace std;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int n, a[14][14], ny, nx, visited[14][14], _sum, mn=987654321;
bool flag = true;
vector<pair<int, int>> v;
void go(int y, int x) {
    for(int i = 0; i < 4; i++) {
        ny = y + dy[i];
        nx = x + dx[i];
        if(ny < 0 ||nx <0||ny >=n||nx>=n) return;
    }
    v.push_back({y, x});
}
int gogo(int num) {
    int tmp = 0;
    visited[v[num].first][v[num].second] = 1;
    tmp += a[v[num].first][v[num].second];
    for(int i = 0; i < 4; i++) {
        ny = v[num].first + dy[i];
        nx = v[num].second + dx[i];
        if(visited[ny][nx] == 1) {
            flag = false;
            return 0;
        }
        visited[ny][nx] = 1;
        tmp += a[ny][nx];
    }
    return tmp;
}
void go2(int f1, int f2, int f3) {
    int _sum = 0;
    _sum += gogo(f1);
    _sum += gogo(f2);
    _sum += gogo(f3);
    if(!flag) {
        return;
    }
    mn = min(mn, _sum);
}
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            go(i, j);
        }
    }

    for(int i = 0; i < v.size(); i++) {
        for(int j = 0; j < i; j++) {
            for(int k = 0; k < j; k++) {
                flag = true;
                memset(visited, 0, sizeof(visited));
                go2(i, j, k);
            }
        }
    }    
    cout << mn << "\n";
    return 0;
}