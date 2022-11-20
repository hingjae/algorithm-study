t = int(input())

for case in range(1, t + 1):
    a = input()
    cnt = a.count('(') + a.count(')') - a.count("()")
    print("#{} {}".format(case, cnt))