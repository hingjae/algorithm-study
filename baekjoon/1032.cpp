#include<bits/stdc++.h>
using namespace std;
int n;
string ret, s;
int main() {
    cin >> n;
    cin >> ret;
    for(int i = 1; i < n; i++) {
        cin >> s;
        for(int j = 0; j < s.size(); j++) {
            if(ret[j] == s[j]) {
                ret[j] = ret[j];
            }
            else {
                ret[j] = '?';
            }
        }
    }
    cout << ret << "\n";
    return 0;
}