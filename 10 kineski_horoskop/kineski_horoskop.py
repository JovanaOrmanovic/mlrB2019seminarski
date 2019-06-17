godina = int(input())
ostatakSa12 = godina % 12
if (ostatakSa12 == 0):
    znak = "MAJMUN"
elif (ostatakSa12 == 1):
    znak = "PETAO"
elif (ostatakSa12 == 2):
    znak = "PAS"
elif (ostatakSa12 == 3):
    znak = "SVINJA"
elif (ostatakSa12 == 4):
    znak = "PACOV"
elif (ostatakSa12 == 5):
    znak = "BIVO"
elif (ostatakSa12 == 6):
    znak = "TIGAR"
elif (ostatakSa12 == 7):
    znak = "ZEC"
elif (ostatakSa12 == 8):
    znak = "ZMAJ"
elif (ostatakSa12 == 9):
    znak = "ZMIJA"
elif (ostatakSa12 == 10):
    znak = "KONJ"
else:
    znak = "KOZA"
print(znak)
