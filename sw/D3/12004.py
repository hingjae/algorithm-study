t = int(input())

for case in range(1, t + 1):
    num = int(input())
    result = "No"
    for i in range(1, 10):
        for j in range(1, 10):
            if num == i * j:
                result = "Yes"
    print("#{} {}".format(case, result))