t = int(input())

for case in range(1, t + 1):
    text = input()
    if text.count("x") > 7:
        print("#{} {}".format(case, "NO"))
    else:
        print("#{} {}".format(case, "YES"))