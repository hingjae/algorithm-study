t = int(input())

for case in range(1, t + 1):
    nums = list(map(int, input().split()))
    nums.sort()
    nums.pop(0)
    nums.pop()
    avg = sum(nums)//len(nums)
    print("#{} {}".format(case, round(avg)))