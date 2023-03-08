t = int(input())
for q in range(t):
    y, x = input().split(); y, x = int(y), int(x)
    end = (max(y,x))**2
    if x >= y and x % 2 != 0:
        print(end-(y-1))
    elif x <= y and y % 2 == 0:
        print(end-(x-1))
    elif x < y and y % 2 != 0:
        print(end-(y-1+y-x))
    elif x > y and x % 2 == 0:
        print(end-(x-1+x-y))
