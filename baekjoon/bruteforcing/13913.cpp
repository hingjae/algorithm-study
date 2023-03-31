#include<bits/stdc++.h>
using namespace std;
int n, k, visited[200004], _prev[200004], ret;
vector<int> v;
int main() {
    cin >> n >> k;

    queue<int> q;
    q.push(n);
    visited[n] = 1;
    while(q.size()) {
        int now = q.front(); q.pop();
        if(now == k) {
            ret = visited[now];
            break;
        }
        for(int next : {now + 1, now - 1, now * 2}) {
            if(next >= 200004 || next < 0 || visited[next]) continue; 
            visited[next] = visited[now] + 1;
            q.push(next);
            _prev[next] = now;
        }
    }
    for(int i = k; i != n; i = _prev[i]) {
        v.push_back(i);
    }
    v.push_back(n);
    reverse(v.begin(), v.end());
    cout << ret - 1 << "\n";
    for(int item : v) {
        cout << item << " ";
    }
    cout << "\n";
    return 0;
}