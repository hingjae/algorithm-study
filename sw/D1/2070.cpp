#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	int a, b;
	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin >> a >> b;
		if(a > b) {
			cout << "#"<<test_case<<" " << ">\n"; 
		} else if(a < b) {
			cout << "#"<<test_case<<" " << "<\n";
		} else {
			cout << "#"<<test_case<<" " << "=\n";
		}
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}
