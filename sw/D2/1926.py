num = int(input())

for i in range(1, num + 1):
    i = str(i)
    clap = i.count('3') + i.count('6') + i.count('9')

    if clap > 0:
        print("-" * clap, end=" ")
    else:
        print(i, end=" ")