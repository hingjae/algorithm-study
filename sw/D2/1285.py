t = int(input())

for case in range(1, t + 1):
    n = int(input())
    a = list(map(int, input().split()))
    print(a)
    # a의 모든 요소를 절댓값으로 바꾸고 오름차순 정렬한 뒤 제일 작은 값들을 카운트함.
    
    for i in range(n):
        tmp = a[i]
        a[i] = abs(tmp)
    a.sort()
    value = a[0]
    result = 1
    for i in range(1, n):
        if value == a[i]:
            result += 1
        else:
            break
    print("#{} {} {}".format(case, value, result))