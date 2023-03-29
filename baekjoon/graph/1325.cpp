#include<bits/stdc++.h>
using namespace std;
int n, m, a, b, cnt[10001], visited[10001], mx;
vector<int> v[10001];

int dfs(int here) {
    visited[here] = 1;
    int ret = 1;
    for(int there : v[here]) {
        if(visited[there])continue;
        ret += dfs(there);
    }
    return ret;
}

int main() {
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        v[b].push_back(a);
    }
    for(int i = 1; i <= n; i++) {
        memset(visited, 0, sizeof(visited));
        cnt[i] = dfs(i);
        mx = max(cnt[i], mx);
    }
    for(int i = 1; i <= n; i++) {
        if(cnt[i] == mx) cout << i << " ";
    }
    return 0;
}