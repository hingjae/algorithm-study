t = int(input())

for case in range(1, t + 1):
    n, k = map(int, input().split())
    arr = []
    for i in range(n):
        arr.append(list(map(int, input().split())))

    result = 0

    # 행우선
    for col in range(n):
        cnt = 0
        for row in range(n):
            if arr[col][row] == 1:
                cnt += 1
            else:
                if cnt == k:
                    result += 1
                cnt = 0
        if cnt == k:
            result += 1

    # 열우선
    for row in range(n):
        cnt = 0
        for col in range(n):
            if arr[col][row] == 1:
                cnt += 1
            else:
                if cnt == k:
                    result += 1
                cnt = 0
        if cnt == k:
            result += 1

    print("#{} {}".format(case, result))