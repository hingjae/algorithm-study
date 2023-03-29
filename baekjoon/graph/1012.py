from collections import deque

dx = [0, 0, 1, -1]
dy = [1, -1, 0, 0]

t = int(input())

def bfs(graph, a, b):
    queue = deque()
    queue.append((a, b))
    graph[a][b] = 0

    while queue:
        x, y = queue.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if nx < 0 or nx >= n or ny < 0 or ny >= m:
                continue
            if graph[nx][ny] == 1:
                graph[nx][ny] = 0
                queue.append((nx, ny))
    return

for _ in range(t):
    n, m, k = map(int, input().split())
    graph = [[0]*m for l in range(n)]
    count = 0
    for i in range(k):
        a, b = map(int, input().split())
        graph[a][b] = 1

    for i in range(n):
        for j in range(m):
            if graph[i][j] == 1:
                bfs(graph, i, j)
                count += 1 
    print(count)
