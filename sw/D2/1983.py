t = int(input())

grades = ['A+', 'A0', 'A-', 'B+', 'B0', 'B-', 'C+', 'C0', 'C-', 'D0']

for case in range(1, t + 1):
    n, k = map(int, input().split())
    students = []
    for i in range(n):
        mid, fin, hw = map(int, input().split())
        students.append((mid * 0.35) + (fin * 0.45) + (hw * 0.2))
        
    k_score = students[k - 1]
    students.sort(reverse=True)     
    idx = students.index(k_score)
    div = n//10
    final_score = idx // div
    print("#{} {}".format(case, grades[final_score]))