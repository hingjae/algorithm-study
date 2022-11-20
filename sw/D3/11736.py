t = int(input())

for case in range(1, t + 1):
    n = int(input())
    numbers = list(map(int, input().split()))
    count = 0
    for i in range(1, n-1):
        tmp = []
        tmp.append(numbers[i-1])
        tmp.append(numbers[i])
        tmp.append(numbers[i+1])
        if tmp[1] != min(tmp) and tmp[1] != max(tmp):
            count += 1
    print("#{} {}".format(case, count))