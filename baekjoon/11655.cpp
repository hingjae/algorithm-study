#include<bits/stdc++.h>
using namespace std;

string s, ret;
int main(){
//	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	getline(cin, s); // 공백포함. 
	for(int i = 0; i < s.length(); i++){
		if((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)){
			if((s[i] >= 65 && s[i] <= 77) || (s[i] >= 97 && s[i] <= 109))
				ret += s[i] + 13;
			else
				ret += s[i] - 13;
		}
		else{
			ret += s[i];
		}
	}
	cout << ret << '\n';
	return 0;
}
