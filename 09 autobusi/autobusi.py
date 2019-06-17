t = float(input())
s = float(input())
v1 = float(input())
# racunamo vreme potrebno prvom autobusu da stigne od grada A do grada B
t1 = s / v1
# racunamo za koliko vremena drugi autobus mora da stigne od grada A do grada B da bi stigao istovremeno sa prvim
t2 = t1 - t
# racunamo kojom brzinom mora da se krece drugi autobus da bi za t2 sata presao s km
v2 = s / t2
print("%.2f" % v2)
