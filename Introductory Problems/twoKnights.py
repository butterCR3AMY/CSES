n = int(input())
ways = [0]*n
if len(ways) >= 1:
    ways[0] = 0
if len(ways) >= 2:
    ways[1] = 6
if len(ways) >= 3:
    ways[2] = 28
if len(ways) >= 4:
    ways[3] = 96
if len(ways) >= 5:
    ways[4] = 252
if len(ways) >= 6:
    for i in range(6, n+1):
        corners = 3*((i**2)-3)
        near = 4*((i**2)-4)
        others = (i*2-1-7)*((i**2)-5)
        chooseTwo = (i*2-1)*(i*2-2)//2
        sum = corners + near + others - chooseTwo + 2
        ways[i-1] = sum+ways[i-2]
for i in range(n):
    print(ways[i])
