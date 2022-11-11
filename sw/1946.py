t = int(input())

for case in range(1, t + 1):
    n = int(input())
    text = str()
    for i in range(n):
        alpha, num = input().split()
        num = int(num)
        text += alpha*num
    count = 0
    print("#{}".format(case))
    for word in text:
        print(word,end="")
        count += 1
        if count == 10:
            print()
            count = 0
    print()