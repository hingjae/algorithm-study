t = int(input())

for case in range(1, t + 1):

    h1, m1, h2, m2 = map(int, input().split())
    h = 0
    m = m1 + m2
    if m > 59:
        m = m - 60
        h += 1
    h += h1 + h2
    if h > 12:
        h = h - 12

    print("#{} {} {}".format(case, h, m))