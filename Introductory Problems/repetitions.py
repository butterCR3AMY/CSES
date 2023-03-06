seq = list(input())
maxi = 1
curlen = 1
for i in range(len(seq)):
    if i > 0:
        if seq[i] == seq[i-1]:
            curlen += 1
        else:
            if curlen > maxi:
                maxi = curlen
            curlen = 1
if curlen > maxi:
    maxi = curlen
print(maxi)
