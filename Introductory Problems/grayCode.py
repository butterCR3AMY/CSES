def reverse(arr):
    back = []
    for i in range(len(arr)-1, -1, -1):
        back.append(arr[i])
    return back
n = int(input())
arr = ["0","1"]
for i in range(n-1):
    backwards = reverse(arr)
    for j in range(len(arr)):
        arr[j] = "0"+arr[j]
    for j in range(len(backwards)):
        backwards[j] = "1"+backwards[j]
        arr.append(backwards[j])
for i in range(len(arr)):
    print(arr[i])
