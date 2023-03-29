# 입력
# 첫 번째 줄에는 지도의 크기 N(정사각형이므로 가로와 세로의 크기는 같으며 5≤N≤25)이 입력되고, 그 다음 N줄에는 각각 N개의 자료(0혹은 1)가 입력된다.

# 출력
# 첫 번째 줄에는 총 단지수를 출력하시오. 그리고 각 단지내 집의 수를 오름차순으로 정렬하여 한 줄에 하나씩 출력하시오.

from collections import deque

dx = [0, 0, 1, -1]
dy = [1, -1, 0, 0]

def bfs(graph, a, b):
    n = len(graph)
    queue = deque()
    queue.append((a, b))
    graph[a][b] = 0
    count = 1

    while queue:
        x, y = queue.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if nx < 0 or nx >= n or ny < 0 or ny >= n: #2차원 배열의 범위를 벗어났는지 체크
                continue
            if graph[nx][ny] == 1:
                graph[nx][ny] = 0
                queue.append((nx, ny))
                count += 1
    return count

n = int(input())
graph = []
for i in range(n):
    graph.append(list(map(int, input())))

cnt = []
for i in range(n):
    for j in range(n):
        if graph[i][j] == 1:
            cnt.append(bfs(graph, i, j))

cnt.sort()
print(len(cnt))
for i in range(len(cnt)):
    print(cnt[i])