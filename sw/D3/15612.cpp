// 2차원 배열 char 
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	char arr[8][8];
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		int row[8] = {};
		int col[8] = {};
		string ret = "yes";
		for(int i = 0; i < 8; i++){
			for(int j = 0; j < 8; j++){
				cin >> arr[i][j];
			}
		}
		for(int i = 0; i < 8; i++){
			for(int j = 0; j < 8; j++){
				if(arr[i][j] == 'O'){
					row[i]++;
					col[j]++;
				}
			}
		}
		for(int i = 0; i < 8; i++){
			if(row[i] != 1 || col[i] != 1){
				ret = "no";
			}
		}
		cout <<"#"<<test_case<<" " << ret << "\n";

	}
	return 0;
}
