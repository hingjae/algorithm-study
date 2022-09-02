from turtle import right


arr = [7,5,9,0,3,1,6,2,4,8]

def quick_sort(arr, start, end):
    if start >= end: #원소가 1개인 경우
        return
    pivot = start
    left = start + 1
    right = end
    while(left <= right): #left와 right가 엇갈릴 때 까지 반복
        while(left <= end and arr[left] <= arr[pivot]):# 왼쪽은 피벗보다 큰 데이터를 찾을 때 까지
            left += 1
        while(right > start and arr[right] >= arr[pivot]): #오른쪽은 피벗보다 작은 데이터를 찾을 때 까지
            right -= 1
        if(left > right): #엇갈렸다면 작은 데이터와 피벗 교체
            arr[right], arr[pivot] = arr[pivot], arr[right]
        else: #엇갈리지 않았다면 작은 데이터 큰데이터 교체
            arr[left], arr[right] = arr[right], arr[left]

    quick_sort(arr, start, right-1)
    quick_sort(arr, right + 1, end)

quick_sort(arr, 0, len(arr) - 1)
print(arr)