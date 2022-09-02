n = int(input())
a = list(map(int, input().split()))
m = int(input())
b = list(map(int, input().split()))
count = [0] * m
for i in range(m):
    for j in range(n):
        if b[i] in a:
            count[i] = 1

print(count)