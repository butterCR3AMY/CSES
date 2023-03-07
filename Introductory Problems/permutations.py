n = int(input())
if n <= 3 and n != 1:
    print("NO SOLUTION")
    quit()
arr = [0]*n
cur = 1
for i in range(1, n, 2):
    arr[i] = cur
    cur += 1
for i in range(0, n, 2):
    arr[i] = cur
    cur += 1
print(str(arr).replace('[', '').replace(']', '').replace(',', ''))
