t = int(input())
# 1/31, 2/28, 3/31, 4/30, 5/31, 6/30, 7/31, 8/31, 9/30, 10/31, 11/30, 12/31
days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
for case in range(1, t + 1):
    m1, d1, m2, d2 = map(int, input().split()) # 5 5 8 15
    if m1 == m2:
        print("#{} {}".format(case, d2 - d1 + 1))
        continue
    sum = 0
    sum += days[m1 - 1] - d1 + 1
    i = m1 + 1
    while i < m2 :
        sum += days[i - 1]
        i += 1
    sum += d2
    print("#{} {}".format(case, sum))