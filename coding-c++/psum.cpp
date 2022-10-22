#include<bits/stdc++.h>
using namespace std;

int a[100004],b ,c, psum[100004], n, m;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	 // 총 n개의 수가 있고 m번 입력을 받음. 
	 // b ~ c까지 범위의 합을 구함. 
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		psum[i] = psum[i - 1] + a[i];
	}
	for(int i = 0; i < m; i++){
		cin >> b >> c;
		cout << psum[c] - psum[b - 1] << "\n";
	}
}
