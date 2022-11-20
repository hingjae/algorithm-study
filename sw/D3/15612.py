t = int(input())

for case in range(1, t + 1):
    matrix = []
    check = []
    row = [0 for i in range(8)]
    col = [0 for i in range(8)]
    result = "yes"
    for i in range(8):
        matrix.append(list(map(str, input())))
    sum = 0
    for i in range(8):
        if matrix[i].count("O") != 1:
            result = "no"
    for i in range(8):
        for j in range(8):
            if matrix[i][j] == 'O':
                row[i] += 1
                col[j] += 1
    for i in range(8):
        if row[i] != 1 or col[i] != 1:
            result = "no"
    print("#{} {}".format(case, result))