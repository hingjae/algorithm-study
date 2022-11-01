#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		int a, max = 0;
		for(int i = 0; i < 10; i++){
			cin >> a;
			if(a > max){
				max = a;
			}
		}
		cout << "#" << test_case << " " << max << "\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
