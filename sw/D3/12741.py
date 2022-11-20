t = int(input())

for case in range(1, t + 1):
    a, b, c, d = list(map(int, input().split()))
    on = min(b, d) - max(a, c)
    if on > 0: 
        pass
    else:
        on = 0
    print("#{} {}".format(case, on))