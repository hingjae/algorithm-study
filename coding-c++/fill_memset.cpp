#include<bits/stdc++.h>
using namespace std;

// vector 10�� ���� 
vector<int> v[10];
// ũ�Ⱑ 10�̸� �ʱⰪ�� 0�� vector�� ����
vector<int> v2(10, 0); 
// ũ�� 10 x 10 ��Ű�� 0�� 2���� vector
vector<vector<int>> v3(10, vector<int>(10, 0));
// 2���� vector
vector<vector<int>> v4;

// �迭 �ʱ�ȭ shortcut
// �Ϻ� �����Ϸ����� ������ ����. ���� �ʴ� �� ����.
int dp[10] = {0, };
int dp2[10][10] = {{0, }};

const int MAX_N = 100;
int dist[MAX_N];
int dist2[MAX_N][MAX_N];

// 0��°==1  1��°==1 
int a[10] = {0, 1}; 

int main() {
	// v2�� 0���� �ʱ�ȭ 
	fill(v2.begin(), v2.end(), 0);
	// memset: 0, -1, �ѹ��ڷθ� �ʱ�ȭ ����
	memset(v, 0, sizeof(v)); 
	//�迭 dist �ʱ�ȭ, �ִ�ġ���� �ʱ�ȭ�ϴ� �� �ָ�
	fill(dist, dist+MAX_N, 0);
	
	//2���� �迭 �ʱ�ȭ ��� 
	for(int i = 0; i < MAX_N; i++) fill(dist2[i], dist2[i]+MAX_N, 0);
	//2���� �迭 �ʱ�ȭ ��� 2 (�̰� �� ��õ)
	fill(&dist2[0][0], &dist2[0][0] + MAX_N*MAX_N, 0);
	return 0; 
} 
