#include<bits/stdc++.h>
using namespace std;
int a, b, c, hh, mm;
int go(int hh, int mm) {
    return hh * 60 + mm;
}
int main() {
    int minutes;
    cin >> a >> b;
    cin >> c;
    minutes = go(a, b + c);
    int h, m;
    h = minutes / 60;
    m = minutes % 60;
    if(h >= 24) {
        h -= 24;
    }
    cout << h << " " << m <<"\n";
    return 0;
}