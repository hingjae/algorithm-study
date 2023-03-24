#include<bits/stdc++.h>
using namespace std;
int n, m, a[54][54], ret, mn, result = 987654321;
vector<vector<int>> chickenCombi;
vector<pair<int, int>> home, chicken;
void combi(int start, vector<int> v) {
    if(v.size() == m) {
        chickenCombi.push_back(v);
        return;
    }
    for(int i = start + 1; i < chicken.size(); i++) {
        v.push_back(i);
        combi(i, v);
        v.pop_back();
    }
    return;
}
int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
            if(a[i][j] == 1)home.push_back({i, j});
            if(a[i][j] == 2)chicken.push_back({i, j});
        }
    }
    vector<int> v;
    combi(-1, v);
    for(vector<int> v : chickenCombi) {
        ret = 0;
        for(pair<int, int> tmp_home: home) {
            mn = 987654321;
            for(int i : v) {
                int _dist = abs(tmp_home.first - chicken[i].first) + abs(tmp_home.second - chicken[i].second);
                mn = min(_dist, mn);
            }
            ret += mn;
        }
        result = min(ret, result);
    }
    cout << result << "\n";
    return 0;
}