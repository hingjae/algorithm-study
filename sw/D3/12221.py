t = int(input())

for case in range(1, t + 1):
    a, b = map(int, input().split())
    if a >= 10 or b >= 10:
        print("#{} {}".format(case, -1))
        continue
    print("#{} {}".format(case, a*b))