#include<bits/stdc++.h>
using namespace std;
int a, b, c, d, e, f, x, y;
pair<int, int> ret;
bool flag;
int main () {
    cin >> a >> b >> c >> d >> e >> f;
    x = -999;
    while(true) {
        
        for(int i = -999; i < 1000; i++) {
            y = i;
            if((a*x + b*y == c) && (d*x + e*y == f)) {
                flag = true;
                ret = {x, y};
                break;
            }
        }
        if(flag) {
            break;
        }
        x++;
        
    }
    cout << ret.first << " " << ret.second << "\n";
    return 0;
}