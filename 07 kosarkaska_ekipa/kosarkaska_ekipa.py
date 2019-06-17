n = int(input())
niz = [0, 0, 0, 0, 0, 0]
for i in range(1, n + 1):
    pozicija = int(input())
    niz[pozicija] += 1
for j in range(1, 6):
    print(str(j) + " : " + str(niz[j]))
