#include<bits/stdc++.h>
using namespace std; 
int n, m, a[104];

int main() {
    cin >> n >> m;
    for(int i = 0; i <= n; i++) {
        a[i] = i;
    }
    for(int i = 0; i < m; i++) {
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        swap(a[tmp1], a[tmp2]);
    }
    for(int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
    return 0;
}