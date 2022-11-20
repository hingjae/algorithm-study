alpha = ['a', 'b', 'c', 'd', 'e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
t = int(input())

for case in range(1, t + 1):
    text = input()
    if text[0] != 'a':
        print("#{} {}".format(case, 0))
        continue
    count = 0
    for i in range(len(text)):
        if alpha[i] == text[i]:
            count += 1
        else:
            break
    print("#{} {}".format(case, count))