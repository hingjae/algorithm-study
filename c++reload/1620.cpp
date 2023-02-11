//atoi 문자열을 숫자로 바꿔줌. "1" -> 1 // "honey" -> 0
#include<bits/stdc++.h>
using namespace std;
int n, m;
map<int, string> mp1;
map<string, int> mp2;
int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        string name;
        cin >> name;
        mp1[i + 1] = name;
        mp2[name] = i + 1;
    }
    for(int i = 0; i < m; i++) {
        string input;
        cin >> input;
        if(atoi(input.c_str()) == 0) {
            cout << mp2[input] << "\n";
        } else {
            cout << mp1[atoi(input.c_str())] << "\n";
        }
    }
    return 0;
}