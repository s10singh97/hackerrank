# Word Order

try:
    n = int(input())
except:
    SystemExit(0)
if n < 1 or n > 100000:
    SystemExit(0)
l = []
ind_len = 0
while n:
    try:
        s = input()
    except:
        SystemExit(0)
    l.append(s)
    ind_len += len(s)
    n -= 1
if ind_len > 1000000:
    SystemExit(0)
distinct_count = 0
m = []
for i in l:
    if i not in m:
        m.append(i)
distinct_count = len(m)
print(distinct_count)
count = [0]*len(m)
for i in m:
        count[m.index(i)] = l.count(i)
for i in count:
    print(i, end = " ")