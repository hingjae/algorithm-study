
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
//	int arr[1000004];
	vector<int> v; 
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		int n, ret, tmp;
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> tmp;
			v.push_back(tmp);
		}
		int _max,maxIdx, idx = 0, cnt = 0;
		while(idx < v.size()){
			_max = *max_element(v.begin(), v.end());
			maxIdx = find(v.begin(), v.end(), _max) - v.begin();
			for(int i = idx; i < maxIdx; i++){
				ret -= v[i];
				cnt++;
			}
			for(int i = idx; i <= maxIdx; i++){
				ret += (cnt * _max);
			}
			v.erase(v.begin(), v.begin()+maxIdx);
			idx = 0;
		}
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
