#include<bits/stdc++.h>
using namespace std;

int n, o, A, B, asum, bsum;
string s, _prev;
string secondToTime(int sum) {
    string ret;
    string minute = "00" + to_string(sum / 60);
    string second = "00" + to_string(sum % 60);
    return minute.substr(minute.size()-2, 2) + ":" + second.substr(second.size()-2, 2);
}
int stringToInt(string s) {
    return atoi(s.substr(0, 2).c_str()) * 60 + atoi(s.substr(3, 5).c_str());
}

void go(int &sum, string s) {
    sum += stringToInt(s) - stringToInt(_prev);
}
int main() {

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> o >> s;
        if(A > B) go(asum, s);
        else if(B > A) go(bsum, s);
        o == 1 ? A++ : B++;
        _prev = s;
    }
    if(A > B) go(asum, "48:00");
    else if(B > A) go(bsum, "48:00");

    cout << secondToTime(asum) << "\n";
    cout << secondToTime(bsum) << "\n";

    return 0;
}