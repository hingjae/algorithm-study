t = int(input())

for case in range(1, t + 1):
    n = int(input())
    a = list(map(int, input().split()))
    target = 2 * n
    cnt = 0
    while sum(a) < target:
        for i in range(n):
            if a[i] == min(a):
                a[i] = max(a[i]+i+1, i + 1)
                cnt += 1
                break
    print("#{} {}".format(case, cnt))