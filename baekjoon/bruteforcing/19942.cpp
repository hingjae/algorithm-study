#include<bits/stdc++.h>
using namespace std;
int n, mp, mf, ms, mv, _min = 987654321;
struct A{
    int mp, mf, ms, mv, cost;
}a[16];
vector<int> v;
vector<vector<int>> combis;
vector<vector<int>> ans;
void combi(int n, int k, int idx) {
    if(v.size() == k) {
        combis.push_back(v);
        return;
    }
    for(int i = idx; i < n; i++) {
        v.push_back(i);
        combi(n, k, i + 1);
        v.pop_back();
    }
    return;
}
int main() {
    cin >> n;
    cin >> mp >> mf >> ms >> mv;
    for(int i = 1; i <= n; i++) {
        combi(n, i, 0);
    }
    for(int i = 0; i < n; i++ ){
        cin >> a[i].mp >> a[i].mf >> a[i].ms >> a[i].mv >> a[i].cost;
    }
    for(auto combi : combis) {
        int p = 0, f = 0, s = 0, v = 0, cost = 0;
        for(int idx : combi) {
            p += a[idx].mp;
            f += a[idx].mf;
            s += a[idx].ms;
            v += a[idx].mv;
            cost += a[idx].cost;
        }
        if(mp <= p && mf <= f && ms <= s && mv <= v) {
            if(cost < _min) {
                _min = cost;
                ans.clear();
                ans.push_back(combi);
            }
            else if(cost == _min) {
                ans.push_back(combi);
            }
        }
    }
    sort(ans.begin(), ans.end());
    if(_min == 987654321) {
        cout << "-1\n";
        return 0;
    }
    cout << _min << "\n";
    for(auto item : ans[0]) {
        cout << item + 1 << " ";
    }
    cout << "\n";
    return 0;
}