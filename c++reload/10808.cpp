//#include<bits/stdc++.h>
//using namespace std;
//string s;
//int num[26];
//int main(){
//	cin >> s;
//	for(int i = 0; i< s.length(); i++){
//		int index = (int)s[i] - 97;
//		num[index]++;
//	}
//	for(int item : num) {
//		cout << item << " ";
//	}
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;  
typedef long long ll;  
string str; 
int cnt[26];
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> str;
	for(char a : str) {
		cnt[a - 'a']++;
	}
	for(int i : cnt) {
		cout << i << " ";
	}
}
