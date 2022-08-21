import sys
sys.setrecursionlimit(10**9)
input = sys.stdin.readline

n, m, r = map(int, input().split())
graph=[[] for _ in range(n+1)]
visited = [0] * (n + 1)

count = 1

for i in range(m):
    u, v = map(int, input().split())
    graph[u].append(v)
    graph[v].append(u)

for i in range(1, n+1):
    graph[i].sort()

def dfs(r):
    global count
    visited[r] = count
    for i in graph[r]:
        if not visited[i]:
            count += 1
            dfs(i)

dfs(r)

for i in range(1, n + 1):
    print(visited[i])