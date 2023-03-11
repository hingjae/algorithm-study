#include<bits/stdc++.h>
using namespace std;

int n, c, tmp;
map<int, int> mp, mp_first;
vector<pair<int, int>> v;
bool cmp(pair<int, int> a, pair<int, int> b) {
	if(a.second  == b.second) {
		return mp_first[a.first] < mp_first[b.first];
	}
	return a.second > b.second;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> c;
	for(int i = 0; i < n; i++) {
		cin >> tmp;
		if(mp[tmp] == 0) mp_first[tmp] = i + 1;
		mp[tmp]++;
	}
	for(auto item : mp) {
		v.push_back({item.first, item.second});
	}
	sort(v.begin(), v.end(), cmp);
	
	for(auto item : v) {
		for(int i = 0; i < item.second; i++) {
			cout << item.first << " ";
		}
	}
	return 0;
}
