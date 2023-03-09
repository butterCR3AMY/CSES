arr = list(input())
n = len(arr)
alphabet = [0]*26
for i in range(n):
    alphabet[ord(arr[i])-ord('A')] += 1
odds = 0
oddletter = 0
for i in range(26):
    if alphabet[i] % 2 != 0:
        odds += 1
        oddletter = chr(i+65)
if odds > 1:
    print("NO SOLUTION")
for i in range(26):
    if alphabet[i] >= 1 and alphabet[i] % 2 == 0:
        print((chr(i+65))*(alphabet[i]//2), end = "")
if odds == 1:
    print(oddletter*(alphabet[ord(oddletter)-ord("A")]), end = "")
for i in range(26-1, -1, -1):
    if alphabet[i] >= 1 and alphabet[i] % 2 == 0:
        print((chr(i+65))*(alphabet[i]//2), end = "")
