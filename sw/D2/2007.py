t = int(input())

for _ in range(1, t+1):
    text = input()

    for i in range(1, 10):
        if text[:i] == text[i:i*2]:
            print('#{} {}'.format(_, i))
            break
