t = int(input())

for case in range(1, t + 1):
    str = input()
    reverse_str = str[::-1]
    if str == reverse_str:
        print("#{} {}".format(case, 1))
    else :
        print("#{} {}".format(case, 0))