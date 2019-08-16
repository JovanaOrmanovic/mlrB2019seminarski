import math

r = float(input())
p = int(input())
obim = 2 * r * math.pi
ukupanPut = p * obim
# centimetre pretvaramo u metre
ukupanPut = ukupanPut * 0.01
print("%.2f" % ukupanPut)
