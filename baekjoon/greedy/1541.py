# 입력
# 첫째 줄에 식이 주어진다. 식은 ‘0’~‘9’, ‘+’, 그리고 ‘-’만으로 이루어져 있고, 
# 가장 처음과 마지막 문자는 숫자이다. 
# 그리고 연속해서 두 개 이상의 연산자가 나타나지 않고, 
# 5자리보다 많이 연속되는 숫자는 없다. 수는 0으로 시작할 수 있다. 
# 입력으로 주어지는 식의 길이는 50보다 작거나 같다.

# 출력
# 첫째 줄에 정답을 출력한다.

exp = input().split('-')
num = []
for i in exp:
    temp = 0
    a = i.split('+') # a에 리스트 형태로 저장.
    for j in a:
        temp += int(j)
    num.append(temp)
result = num[0]
for i in range(1, len(num)):
    result -= num[i]
print(result)
