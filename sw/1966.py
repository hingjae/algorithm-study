t = int(input())

for case in range(1, t + 1):
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort()
    print("#{}".format(case), end=" ")
    for num in arr:
        print(num, end=" ")
    print()