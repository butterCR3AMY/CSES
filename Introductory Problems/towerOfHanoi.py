def TowerOfHanoi(n, from_rod, to_rod, aux_rod):
    global arr
    if n == 0:
        return
    TowerOfHanoi(n-1, from_rod, aux_rod, to_rod)
    arr.append([from_rod, to_rod])
    TowerOfHanoi(n-1, aux_rod, to_rod, from_rod)
N = int(input())
arr = []
TowerOfHanoi(N, 1, 3, 2)
print(len(arr))
for i in range(len(arr)):
    print(arr[i][0], arr[i][1])
