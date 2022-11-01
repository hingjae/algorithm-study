#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		string str;
		cin >> str;
		if(str[0] == 'a'){
			int ret = 1;
			char tmp = ++str[0];
			for(int i = 1; i < str.length(); i++){
				if(str[i] == tmp){
					tmp++;
					ret++;
					continue;
				}
				break;
			}
			cout << "#" << test_case << " " << ret << "\n";
		} else {
			cout << "#" << test_case << " 0\n";
		}
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
