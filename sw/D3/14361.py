t = int(input())

for case in range(t):
    n = input()
    flag = 'impossible'

    new = n
    i = 2
    # 자릿수가 변하지 않을 때까지 n곱을 한다
    while True:
        new = list(str(int(n) * i))
        i += 1

        # 만약 갯수가 다르면 멈춘다.
        if len(new) != len(n):
            break

        # 리스트의 요소가 같은지
        if set(new) == set(n):
            flag = 'possible'
            break

    print(f"#{case + 1} {flag}")