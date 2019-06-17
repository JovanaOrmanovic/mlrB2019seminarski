import sys
ponudeZaMore={}
for ulaz in sys.stdin:
    imeAgencije,cena=[i for i in ulaz.split()]
    ponudeZaMore.update({int(cena):imeAgencije})  
for ponuda in sorted(ponudeZaMore):
    print(ponudeZaMore[ponuda])   
