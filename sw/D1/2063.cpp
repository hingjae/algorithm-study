// 중간값 구하기 
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	int arr[200] = {};
	int n, mid;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	mid = n / 2;
	sort(arr, arr + n);
	cout << arr[mid] << "\n";
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
