#include<bits/stdc++.h>
using namespace std;
int k, a[1030];
vector<int> ret[14];
void go(int s, int e, int level) {
    if(s > e) {
        return;
    }
    if(s == e) {
        ret[level].push_back(a[s]);
        return;
    }
    int mid = (s + e) / 2;
    ret[level].push_back(a[mid]);
    go(s, mid - 1, level + 1);
    go(mid + 1, e, level + 1);
    return ;
}
int main() {
    cin >> k;
    int _end = pow(2, k) - 1;
    for(int i = 0; i < _end; i++) {
        cin >> a[i];
    }
    go(0, _end, 1);
    for(int i = 1; i <= k; i++) {
        for(int item : ret[i]) {
            cout << item << " ";
        }
        cout << "\n";
    }
    return 0;
}