n = int(input())
fives = n//5
for i in range(2, 15):
    if n >= 5**i:
        fives += n//(5**i)
print(fives)
