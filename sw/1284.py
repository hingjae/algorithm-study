t = int(input())

for case in range(1, t + 1):
    p, q, r, s, w = map(int, input().split())
    a = p * w
    b = q
    if w > r:
        b += (w - r) * s
    print("#{} {}".format(case, min(a, b)))