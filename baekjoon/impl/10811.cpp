#include<bits/stdc++.h>
using namespace std;
int n, m, a[101];
queue<int> q;
int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        a[i] = i;
    }
    for(int i = 0; i < m; i++) {
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        for(int j = tmp2; j >= tmp1; j--) {
            q.push(a[j]);
        }
        for(int j = tmp1; j <= tmp2; j++ ){
            a[j] = q.front(); q.pop();
        }
    }
    for(int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
    return 0;
}