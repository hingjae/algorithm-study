import math
t = int(input())

for case in range(1, t + 1):
    n, d = map(int, input().split())
    result = math.ceil(n /(2*d + 1))
    print("#{} {}".format(case, result))