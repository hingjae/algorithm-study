#include<bits/stdc++.h>
using namespace std;
int t, a, b, tmp = 1;
int main() {
    cin >> t;
    while(t--) {
        cin >> a >> b;
        tmp = 1;
        for(int i = 0; i < b; i++) {
            tmp = (tmp * a) % 10;  
        }
        if(tmp == 0) {
            cout << 10 << "\n";
            continue;
        }
        cout << tmp << "\n";
    }
    return 0;
}