t = int(input())
yoil = ['SAT', 'FRI', 'THU','WED', 'TUE' ,'MON', 'SUN' ]
for case in range(1, t + 1):
    s = input()
    print("#{} {}".format(case, yoil.index(s)+1))