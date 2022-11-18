t = int(input())

for case in range(1, t + 1):
    a, b = map(int, input().split())
    time = a + b
    if time >= 24:
        time -= 24
    print("#{} {}".format(case, time))