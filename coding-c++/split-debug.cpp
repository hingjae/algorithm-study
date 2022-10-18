#include<bits/stdc++.h>
using namespace std;

vector<string> split(string input, string delimiter) {
	vector<string> ret; // ã�� ���ڿ� ������ 
	long long pos = 0; // index 
	string token = ""; // ã�� ���ڿ� 
	while((pos = input.find(delimiter)) != string::npos) {
		token = input.substr(0, pos);
		ret.push_back(token);
		input.erase(0, pos + delimiter.length());
	}
	ret.push_back(input);
	return ret;
}

vector<string> split_debug(string input, string delimiter) {
	vector<string> ret;
	long long pos = 0;
	string token = "";
	while((pos = input.find(delimiter)) != string::npos) {
		long long pos = input.find(delimiter);
		cout << "POS : " << pos << "\n";
		if(pos == string::npos)break;
		token = input.substr(0, pos);
		ret.push_back(token);
		input.erase(0, pos + delimiter.length());
	}
	ret.push_back(input);
	return ret;
}

int main(){
	string s = "�ȳ��ϼ��� ������ �Դϴ�. �ݰ����ϴ�.";
	string d = " ";
	vector<string> a = split(s, d);
	string s2 = "aaaa bbb ccccc ee ddddddddd!";
	vector<string> c = split_debug(s2, " ");
	// 4 3 5 2 ���⸦ ã�� �ش� ù��° �ε����� ��ȯ�Ѵ�.
	// ���ڿ��� erase�Ǳ� ������ aaaa, bb �̷������� �Ǵ� �͵� ����.
	for(string b : a) cout << b << "\n";
}
