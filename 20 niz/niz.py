n = int(input())
a = []
for i in range(0, n):
    a.append(int(input()))
b = []
for j in range(0, int(n / 2)):
    b.append(a[j] * a[n - 1 - j])
for k in range(0, int(n / 2)):
    print(b[k], end=' ')
print()
