#include<bits/stdc++.h>
using namespace std;

vector<int> v;

int main(void){
	for(int i = 1; i <= 5; i++) v.push_back(i);
	for(int i = 0; i < 5; i++) {
		cout << i << "��° ��� : " << *(v.begin() + i) << "\n";
		cout << &*(v.begin() + i) << '\n';
	}
}
