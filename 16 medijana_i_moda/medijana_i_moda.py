n = int(input())
a = []
for i in range(0, n):
    a.append(int(input()))
a.sort()
medijana = 0
if n % 2 == 0:
    medijana = (a[n//2]+a[n//2 - 1])/2
else:
    medijana = a[n//2]
# Napravimo niz b koji ce da cuva koliko se puta pojavila
# koja ocena. b[i-1] ce sadrzati broj pojavljivvanja
# ocene i. Kako oceena ima 5, toliko ima i elemenata naseg niza.
b = [0, 0, 0, 0, 0]
for i in range(1, n):
    b[a[i]-1] += 1
najvisePojavljivanja = max(b)
for i in range(0, 5):
    if najvisePojavljivanja == b[i]:
        print(int(i + 1), end=' ')
print()
print(int(medijana))
