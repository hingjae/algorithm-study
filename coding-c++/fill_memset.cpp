#include<bits/stdc++.h>
using namespace std;

// vector 10개 생성 
vector<int> v[10];
// 크기가 10이며 초기값이 0인 vector를 선언
vector<int> v2(10, 0); 
// 크기 10 x 10 초키값 0인 2차원 vector
vector<vector<int>> v3(10, vector<int>(10, 0));
// 2차원 vector
vector<vector<int>> v4;

// 배열 초기화 shortcut
// 일부 컴파일러에서 통하지 않음. 쓰지 않는 걸 권장.
int dp[10] = {0, };
int dp2[10][10] = {{0, }};

const int MAX_N = 100;
int dist[MAX_N];
int dist2[MAX_N][MAX_N];

// 0번째==1  1번째==1 
int a[10] = {0, 1}; 

int main() {
	// v2를 0으로 초기화 
	fill(v2.begin(), v2.end(), 0);
	// memset: 0, -1, 한문자로만 초기화 가능
	memset(v, 0, sizeof(v)); 
	//배열 dist 초기화, 최대치까지 초기화하는 거 주목
	fill(dist, dist+MAX_N, 0);
	
	//2차원 배열 초기화 방법 
	for(int i = 0; i < MAX_N; i++) fill(dist2[i], dist2[i]+MAX_N, 0);
	//2차원 배열 초기화 방법 2 (이걸 더 추천)
	fill(&dist2[0][0], &dist2[0][0] + MAX_N*MAX_N, 0);
	return 0; 
} 
