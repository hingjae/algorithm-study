t = int(input())

for case in range(1, t + 1):
    n, s = map(int, input().split())
    arr = list(map(int, input().split()))
    result = max(arr) - min(arr) + min(abs(s-min(arr)), abs(s-max(arr)))
    print("#{} {}".format(case, result))