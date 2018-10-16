# Nested Lists

n = int(input())
if n < 2 or n > 5:
    SystemExit(0)
ff = []; dd = []
for i in range(n):
    name = input()
    score = float(input())
    d = [score, name]
    ff.append(d)
    dd.append(score)
# print(ff)
ff.sort()
dd.sort()
# print(ff)
# print(dd)
ee = []
mm = min(dd)
count = 0
while mm in dd:
    dd.remove(mm)
    count += 1
# print(dd)
ee.append(dd.index(dd[0]))
for i in range(1, len(dd)):
    if dd[0] == dd[i]:
        ee.append(dd.index(dd[i])+1)
ee = list(set(ee))
ee = [i+count for i in ee]
# print(ee)
dd.clear()
for i in range(len(ff)):
    if i in ee:
        dd.append(ff[i][1])
dd.sort()
[print(i) for i in dd]