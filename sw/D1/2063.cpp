// �߰��� ���ϱ� 
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
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}
