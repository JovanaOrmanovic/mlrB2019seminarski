dan, mesec = [int(i) for i in input().split()]

godDoba = ""
if (mesec == 1 or mesec == 2 or (mesec == 3 and dan <= 20) or (mesec == 12 and dan > 21)):
    godDoba = "ZIMA"
elif (mesec == 4 or mesec == 5 or (mesec == 3 and dan > 21) or (mesec == 6 and dan <= 21)):
    godDoba = "PROLECE"
elif (mesec == 7 or mesec == 8 or (mesec == 6 and dan > 21) or (mesec == 9 and dan <= 22)):
    godDoba = "LETO"
else:
    godDoba = "JESEN"

print(godDoba)
