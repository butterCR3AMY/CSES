n = int(input())
arr = [0]*n
arr = input().split()
arr.sort()
ans = 1
for i in range(n):
    if i > 0:
        if arr[i] != arr[i-1]:
            ans += 1
print(ans)
