def brojUDnevniku(ucenik):
    return int(ucenik[2:])

n = int(input())
spisakMatematika = []
for i in range(0, n):
    spisakMatematika.append(input())
m = int(input())
spisakProgramiranje = []
for i in range(0, m):
    spisakProgramiranje.append(input())
i = j = br = 0
while i < n and j < m:
    brUDnevMat = brojUDnevniku(spisakMatematika[i])
    brUDnevProg = brojUDnevniku(spisakProgramiranje[j])
    if brUDnevMat < brUDnevProg:
        i += 1
    elif brUDnevMat > brUDnevProg:
        j += 1
    else:
        br += 1
        i += 1
        j += 1
print(br)
