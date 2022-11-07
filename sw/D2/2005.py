t = int(input())

for i in range(1, t + 1):
    n = int(input())
    print("#{}".format(i))
    for i in range(n):
        now = []
        for j in range(i+1):
            if j == 0 or j == i:
                now.append(1)
                print(1, end=" ")
            else:
                print(before[j - 1] + before[j], end=" ")
                now.append(before[j-1] + before[j])
        before = now
        print()