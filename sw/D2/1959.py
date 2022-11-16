t = int(input())

for case in range(1, t + 1):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    if m > n:
        max = -100004
        idx = 0
        for i in range(m-n+1):
            sum = 0
            for j in range(n):
                sum += a[j] * b[j + i]
            if sum > max:
                max = sum
        print("#{} {}".format(case, max))
    else :
        max = -100004
        idx = 0
        for i in range(n-m+1):
            sum = 0
            for j in range(m):
                sum += b[j] * a[j + i]
            if sum > max:
                max = sum
        print("#{} {}".format(case, max))
