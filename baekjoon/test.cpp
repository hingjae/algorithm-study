#include<bits/stdc++.h>
using namespace std;
int arr[5] = {1,2,3,4,5};
int n = 5, k = 3;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < i; j++){
			for(int k = 0; k < j; k++){
				cout << arr[i] << " " << arr[j] << " " << arr[k] << '\n';
			}
		}
	}
}
