n = float(input())
m = int(input())
brojac = 0
for i in range(0, m):
    cenaProizvoda = float(input())
    if cenaProizvoda <= n:
        brojac += 1
print(brojac)
