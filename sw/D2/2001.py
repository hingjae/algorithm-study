t = int(input())

for case in range(1, t + 1):
    n, m = map(int, input().split())
    arr = [list(map(int, input().split())) for _ in range(n)]
    fly = 0
    for i in range(n-m+1):
        for j in range(n-m+1):
            temp = 0
            for a in range(i, i+m):
                for b in range(j, j+m):
                    temp += arr[a][b]
            if temp > fly:
                fly = temp
    print("#{} {}".format(case, fly))