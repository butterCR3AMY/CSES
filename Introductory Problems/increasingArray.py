n = int(input())
arr = [0]*n
arr = input().split()
for i in range(n):
    arr[i] = int(arr[i])
steps = 0
for i in range(n):
    if i > 0:
        if arr[i] < arr[i-1]:
            steps += arr[i-1]-arr[i]
            arr[i] = arr[i-1]
print(steps)
