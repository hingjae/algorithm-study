#include<bits/stdc++.h>
using namespace std;
int t, n;
int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while(t--) {
        cin >> n;
        map<string, int> mp;
        for(int i = 0; i < n; i++) {
            string name, part;
            cin >> name >> part;
            mp[part]++;
        }
        long long ret = 1;
        for(auto a : mp) {
            ret *= ((long long)a.second + 1);
        }
        ret--;
        cout << ret << "\n";
    }
    return 0;
}