t = int(input())

moneys = [50000, 10000, 5000, 1000, 500, 100, 50, 10]

for case in range(1, t + 1):
    total = []
    price = int(input())
    print("#{}".format(case))
    for money in moneys:
        total.append(price//money)
        price %= money
    for count in total:
        print(count, end=" ")
    print()