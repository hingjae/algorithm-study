t = int(input())

for case in range(1, t + 1):
    n, pd, pg = map(int, input().split())
    if pd != 0 and pg == 0:
        print("#{} {}".format(case, "Broken"))
    elif pd != 100 and pg == 100:
        print("#{} {}".format(case, "Broken"))
    else:
        check = 0
        for q in range(1,n+1):
            
            # q*d/100이 정수가 되는 순간 종료
            if (q*pd/100) == (q*pd//100):
                check = 1
                break
        if check == 1:
            print('#{} {}'.format(case,'Possible'))
        else:
            print('#{} {}'.format(case,'Broken'))