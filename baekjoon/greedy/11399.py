# 입력
# 첫째 줄에 사람의 수 N(1 ≤ N ≤ 1,000)이 주어진다. 
# 둘째 줄에는 각 사람이 돈을 인출하는데 걸리는 시간 Pi가 주어진다. 
# (1 ≤ Pi ≤ 1,000)

# 출력
# 첫째 줄에 각 사람이 돈을 인출하는데 필요한 시간의 합의 최솟값을 출력한다.

n = int(input())
p = list(map(int, input().split()))
p.sort()
result = 0
i = 1
while i <= n: #len(p) == 5
    for j in range(i):
        result += p[j]
    i += 1
print(result)