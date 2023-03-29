#include<bits/stdc++.h>
using namespace std;
int n, cnt[26];
string s, ret;
int main(){
	cin >>  n;
	for(int i = 0; i < n; i++){
		cin >> s;
		cnt[s[0] - 'a']++; //(int)로 형변환을 하지 않아도 c++ 이 자동으로 해준다. 
	} 
	for(int i = 0; i < 26; i++){
		if(cnt[i] >= 5){
			ret += (i + 'a'); // (char)로 형변환을 하지 않아도 c++ 이 자동으로 해준다. 
		}
	}
	if(ret.size()) cout << ret << '\n';
	else cout << "PREDAJA"<< '\n';
	return 0; 
}
