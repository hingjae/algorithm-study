#include<bits/stdc++.h>
using namespace std;
int n, cnt[58];
string s;
int main() {
    cin >> n;
    while(n) {
        s = to_string(n);
        for(int i = 0; i < s.size(); i++) {
            cnt[(int)s[i]]++;
        }
        n--;
    }
    for(int i = 48; i < 58; i++) {
        cout << cnt[i] << " ";
    }
    return 0;
}