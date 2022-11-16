t = int(input())

for _ in range(1, t + 1):
    case = int(input())
    scores = list(map(int, input().split()))
    result = [0] * 101
    for score in scores:
        result[score] += 1
    result.reverse()
    value = max(result)
    print("#{} {}".format(case, 100 - result.index(value)))