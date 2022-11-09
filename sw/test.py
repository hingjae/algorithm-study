t = int(input())

for case in range(1, t + 1):
    n, k = map(int, input().split())
    matrix = []
    for i in range(n):
        matrix.append(list(map(int, input().split())))
    
    total = 0
    # 행 우선
    for row in range(n):
        cnt = 0
        for col in range(n):
            if matrix[row][col] == 1:
                cnt += 1
            else :
                if cnt == k:
                    total += 1
                cnt = 0
        if cnt == k:
            total += 1

    for col in range(n):
        cnt = 0
        for row in range(n):
            if matrix[row][col] == 1:
                cnt += 1
            else : 
                if cnt == k:
                    total += 1
                cnt = 0
        if cnt == k:
            total += 1
    
    print("#{} {}".format(case, total))