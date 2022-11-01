//평균값 구하기 + 소수점 두자리 반올림 

#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    int arr[10] = {}, sum = 0;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        sum = 0;
        for(int i = 0; i < 10; i++){
        	cin >> arr[i];
            sum += arr[i];
        }
        cout.precision(2);
        cout << "#"<<test_case<<" " <<(double)sum/10 << "\n";

	}
	return 0;
}
