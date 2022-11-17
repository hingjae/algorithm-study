t = int(input())

for case in range(1, t + 1):
    amount = int(input())
    yoil = list(map(int, input().split()))
    count = 0
    day = 0
    while count != amount:
        for i in range(len(yoil)):
            if yoil[i] == 1:
                count += 1
                if count == amount:
                    day += 1
                    break
            day += 1

    a = yoil.index(1)
    print("#{} {}".format(case, day-a))