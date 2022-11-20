t = int(input())

for case in range(1, t + 1):
    text = input()
    a = set()
    for c in text:
        a.add(c)
    if len(a) == 2:
        result = "Yes"
    else:
        result = "No"
    print("#{} {}".format(case, result))