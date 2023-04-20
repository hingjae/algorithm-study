#include<bits/stdc++.h>
using namespace std;
int idx;
string s, bomb, tmp, ret;
int main() {
    cin >> s;
    cin >> bomb;
    while(true) {
        string tmp;
        tmp = s.substr(idx, idx + bomb.size());
        if(bomb == tmp) {
            idx += 
            continue;
        }
        ret += s[idx];
        idx++;
    }
    return 0;
}dfadfgg