#include<bits/stdc++.h>
using namespace std;
int x, n, a, b; 
int main() {
    cin >> x;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        x -= (a * b);
    }
    if(x) {
        cout << "No\n";
    } else {
        cout << "Yes\n";
    }
    return 0;
}