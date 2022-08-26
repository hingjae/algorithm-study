from collections import deque
import sys
sys.setrecursionlimit(10**9)
input = sys.stdin.readline

n, m, v = map(int, input().split())
graph = [[] for _ in range(n + 1)]
visited_dfs = [False] * (n + 1)
visited_bfs = [False] * (n + 1)
sequence_dfs = []
sequence_bfs = []

for i in range(m):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

for i in range(1, n+1):
    graph[i].sort()

def dfs(v):
    visited_dfs[v] = True
    sequence_dfs.append(v)
    for i in graph[v]:
        if not visited_dfs[i]:
            dfs(i)

def bfs(v):
    queue = deque([v])
    visited_bfs[v] = True
    sequence_bfs.append(v)
    while queue:
        v = queue.popleft()
        for i in graph[v]:
            if not visited_bfs[i]:
                queue.append(i)
                visited_bfs[i] = True
                sequence_bfs.append(i)

dfs(v)
bfs(v)

for i in sequence_dfs:
    print(i, end=" ")
print()
for i in sequence_bfs:
    print(i, end=" ")

