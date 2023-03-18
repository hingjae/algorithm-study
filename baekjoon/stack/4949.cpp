#include<bits/stdc++.h>
using namespace std;
string s;

int main() {
    while(true) {
        getline(cin, s);
        if(s == ".")break;
        stack<char> stk;
        for(char c : s) {
            if(c == '(' || c == '[') stk.push(c);
            else if(c == ')' && (stk.size() && stk.top() == '(')) stk.pop();
            else if(c == ']' && (stk.size() && stk.top() == '[')) stk.pop();
            else if(c == ')' || c == ']') stk.push(c);
        }
        if(stk.size() == 0 && s[s.size()-1] == '.') cout << "yes\n";
        else cout << "no\n";
    }

    return 0;
}