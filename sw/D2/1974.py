t = int(input())
num = [1, 2, 3, 4, 5, 6, 7, 8, 9]
for case in range(1, t + 1):
    matrix = []
    result = 1

    # 행렬 입력
    for i in range(9):
        matrix.append(list(map(int, input().split())))

    # 행 우선
    for row in range(9):
        tmp = []
        for col in range(9):
            tmp.append(matrix[row][col])
        tmp.sort()
        if tmp != num:
            result = 0
            break
    
    # 열 우선
    for col in range(9):
        tmp = []
        for row in range(9):
            tmp.append(matrix[row][col])
        tmp.sort()
        if tmp != num:
            result = 0
            break
    # 블록 탐색
    for i in range(0, 3):
        for j in range(0, 3):
            tmp.append(matrix[i][j])
    tmp.sort()
    if tmp != num:
        result = 0
        
    tmp = []
    for i in range(3, 6):
        for j in range(3, 6):
            tmp.append(matrix[i][j])
    tmp.sort()
    if tmp != num:
        result = 0
        
    tmp = []
    for i in range(6, 9):
        for j in range(6, 9):
            tmp.append(matrix[i][j])
    tmp.sort()
    if tmp != num:
        result = 0

    print("#{} {}".format(case, result))