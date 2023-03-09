t = int(input())
for q in range(t):
    pile1, pile2 = input().split(); pile1, pile2 = int(pile1), int(pile2)
    if pile1 == pile2:
        if pile2 % 3 == 0:
            print("YES")
        else:
            print("NO")
    elif pile1 > pile2:
        diff = pile1-pile2
        pile1 -= 2*diff
        pile2 -= diff
        if pile1 < 0:
            print("NO")
        elif pile1 % 3 != 0:
            print("NO")
        elif pile1 % 3 == 0:
            print("YES")
    elif pile2 > pile1:
        diff = pile2-pile1
        pile2 -= 2*diff
        pile1 -= diff
        if pile1 < 0:
            print("NO")
        elif pile1 % 3 != 0:
            print("NO")
        elif pile1 % 3 == 0:
            print("YES")
