n, m, r = map(int, input().split())
graph = [[] for _ in range(n+1)]
visited = [0] * (n+1)
count = 1

def dfs(graph, v, visited):
    global count
    visited[v] = count
    for i in graph[v]:
        if visited[i] == 0:
            count += 1
            dfs(graph, i, visited)

for i in range(m):
    u, v = map(int, input().split())
    graph[u].append(v)
    graph[v].append(u)

for i in range(n+1):
    graph[i].sort()

dfs(graph, r, visited)

for i in range(1, n+1):
    print(visited[i])