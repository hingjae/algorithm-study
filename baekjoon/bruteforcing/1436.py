# 입력
# 첫째 줄에 숫자 N이 주어진다. N은 10,000보다 작거나 같은 자연수이다.

# 출력
# 첫째 줄에 N번째 영화의 제목에 들어간 수를 출력한다.
# 666이 들어가는 수

n = int(input())
count = 0
num = 666
while True:
    if '666' in str(num):
        count += 1
    if n == count:
        print(num)
        break
    num += 1