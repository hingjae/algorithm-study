#include<bits/stdc++.h>
using namespace std;
int n, mp, mf, ms, mv;
vector<vector<int>> combis;
vector<int> v;
void combi(int n, int c, int idx) {
    if(v.size() == c) {
        combis.push_back(v);
        return;
    }
    for(int i = idx; i < n; i++) {
        v.push_back(i);
        combi(n, c, i + 1);
        v.pop_back();
    }
    return ;
}
int main() {
    cin >> n;
    cin >> mp >> mf >> ms >> mv;
    for(int i = 1; i <= n; i++) {
        combi(n, i, 0);
    }
    for(int i = 0; i < n; i++) {
        a[i]
    }
    return 0;
}