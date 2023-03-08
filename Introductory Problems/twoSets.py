n = int(input())
sum = 0
mark = [0]*(n+1)
for i in range(1, n+1):
    sum += i
if sum % 2 != 0:
    print("NO")
    quit()
else:
    print("YES")
sum //= 2
ans = 0
for i in range(n,0,-1):
    if sum <= i:
        mark[sum] = 1
        ans += 1
        sum = 0
        break
    elif sum > i:
        mark[i] = 1
        ans += 1
        sum -= i
print(ans)
for i in range(1, n+1):
    if mark[i] == 1:
        print(i, end = " ")
print()
print(n-ans)
for i in range(1, n+1):
    if mark[i] == 0:
        print(i, end = " ")
