#include<bits/stdc++.h>
using namespace std;
string s;
int cnt[26]; // �迭�� ������ �����ϸ� �ڵ����� �ʱ�ȭ��. 
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> s;
	for(char c : s) {
		cnt[c - 'a']++;
	}
	for(int i : cnt) cout << i << " ";
	return 0;
} 
