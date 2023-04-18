#include<bits/stdc++.h>
using namespace std;
string s, grade;
double sum, tmp, score = 0.0, ret;
double go(string grade) {
    if(grade == "A+") {
        return 4.5;
    } else if(grade == "A0"){
        return 4.0;
    } else if(grade == "B+"){
        return 3.5;
    } else if(grade == "B0"){
        return 3.0;
    } else if(grade == "C+"){
        return 2.5;
    } else if(grade == "C0"){
        return 2.0;
    } else if(grade == "D+"){
        return 1.5;
    } else if(grade == "D0") {
        return 1.0;
    } else if(grade == "F") {
        return 0.0;
    }
}
int main() {
    for(int i = 0; i < 20; i++) {
        cin >> s >> tmp >> grade;
        
        if(grade != "P") {
            sum += tmp;
            score += tmp * go(grade);
        }

    }
    cout << fixed;
    cout.precision(6);
    cout << score / sum << "\n";
    return 0;
}