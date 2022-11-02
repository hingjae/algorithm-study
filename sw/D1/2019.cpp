#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, two = 1;
	cin >> a;
	for(int i = 0; i <= a; i++){
		cout << two << " ";
		two *=  2;
	}
	
	return 0;
}
