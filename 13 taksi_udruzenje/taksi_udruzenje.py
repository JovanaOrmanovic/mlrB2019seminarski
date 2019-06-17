import sys
brMin, Min = [int(i) for i in input().split()]
for ulaz in sys.stdin:
    brPotencijalnogMin, minDoDolaska = [int(i) for i in ulaz.split()]
    if minDoDolaska < Min:
        brMin = brPotencijalnogMin
        Min = minDoDolaska
print(int(brMin))
