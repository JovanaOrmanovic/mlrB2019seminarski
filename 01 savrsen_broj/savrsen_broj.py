broj = int(input())
ukupanZbirDelioca = 1
for i in range(2, broj // 2 + 1):
    if broj % i == 0:
        ukupanZbirDelioca += i
if(ukupanZbirDelioca == broj):
    print("DA")
else:
    print("NE")
