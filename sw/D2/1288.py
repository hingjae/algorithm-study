t = int(input())

for case in range(1, t + 1):
    n = int(input())
    numbers = [0] * 10
    i = 1
    while 0 in numbers:
        num = str(n * i)
        for item in num:
            numbers[int(item)] += 1
        i += 1
    print("#{} {}".format(case, num))