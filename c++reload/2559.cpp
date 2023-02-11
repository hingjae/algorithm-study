#include <bits/stdc++.h>
using namespace std;
int n, k, psum[100004], ret = -10000004;
int main() {
    cin >> n >> k;
    for(int i = 1; i <= n; i++) {
        int temp;
        cin >> temp; psum[i] = psum[i - 1] + temp;   
    }
    for(int i = k; i <= n; i++ ) {
        ret = max(ret, psum[i] - psum[i - k]);
    }
    cout << ret << "\n";
}