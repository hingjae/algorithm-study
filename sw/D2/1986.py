t = int(input())

for case in range(1, t + 1):
    num = int(input())
    result = 0
    for i in range(1, num + 1):
        if i % 2 == 0:
            result -= i
        else:
            result += i
    print("#{} {}".format(case, result))