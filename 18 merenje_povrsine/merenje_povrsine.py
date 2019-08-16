povrsina = float(input())
indikator = int(input())
if indikator == 1:
    novaPovrsina = povrsina * 100
elif indikator == 2:
    novaPovrsina = povrsina * 10000
else:
    novaPovrsina = povrsina * 1000000
print("%.2f" % novaPovrsina)
