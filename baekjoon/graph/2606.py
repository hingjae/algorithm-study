import sys
from collections import deque
input = sys.stdin.readline

n = int(input())
m = int(input())

graph = [[] for _ in range(n+1)]
visited = [False] * (n + 1)
count = 0
start = 1
for i in range(m):
    u, v = map(int, input().split())
    graph[u].append(v)
    graph[v].append(u)

for i in range(1, n+1):
    graph[i].sort()

def bfs(start):
    queue = deque([start])
    visited[start] = True
    while queue:
        v = queue.popleft()
        for i in graph[v]:
            if not visited[i]:
                queue.append(i)
                visited[i] = True
                global count
                count += 1
bfs(1)
print(count)