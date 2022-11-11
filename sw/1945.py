t = int(input())

for case in range(1, t + 1):
    num = int(input())
    small = [2, 3, 5, 7, 11]
    result = [0, 0, 0, 0, 0]
    for i in range(len(small)):
        while True:
            if num % small[i] == 0:
                num = num/small[i]
                result[i] = result[i] + 1
            else:
                break
    print("#{}".format(case), end=" ")
    for item in result:
        print(item, end=" ")
    print()
