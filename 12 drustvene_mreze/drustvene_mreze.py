n = int(input())
brInsta = brFB = brTw = 0
# brInsta - broj korisnika instagrama
# brFB - broj korisnika facebook-a
# brTw - broj korisnika twitter-a
for i in range(1, n+1):
    glas = int(input())
    if glas == 1:
        brInsta += 1
    elif glas == 2:
        brFB += 1
    else:
        brTw += 1
maxGlasova = brInsta
najpopularnijaMreza = "Instagram"
if maxGlasova < brFB:
    maxGlasova = brFB
    najpopularnijaMreza = "Facebook"
if maxGlasova < brTw:
    maxGlasova = brTw
    najpopularnijaMreza = "Twitter"
print(najpopularnijaMreza)
print("%.2f%%" % ((maxGlasova * 100) / n))
