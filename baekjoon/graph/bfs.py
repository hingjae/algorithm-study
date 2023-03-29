from collections import deque

def bfs(graph, start, visited):
    queue = deque([start])
    visited[start] = True # 현재 노드를 방문 처리
    while queue:
        v = queue.popleft() #큐에서 하나의 원소를 뽑아 출력하기
        print(v, end=" ")
        for i in graph[v]:
            if not visited[i]:
                queue.append(i)
                visited[i] = True

graph = [
    [],
    [2, 3, 8],
    [1, 7],
    [1, 4, 5],
    [3, 5],
    [3, 4],
    [7],
    [2, 6, 8],
    [1, 7]
]

visited = [False] * 9

bfs(graph, 1, visited)