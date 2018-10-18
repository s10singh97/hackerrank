# Lists

n = int(input())
l = []
for i in range(n):
    name, *line = input().split()
    num = [*line]
    if len(num) != 0:
        num = [int(x) for x in num]
    if len(num) == 2:
        l.insert(num[0], num[1])
    if len(num) == 1 and name == "remove":
        l.remove(num[0])
    if len(num) == 1 and name == "append":
        l.append(num[0])
    if name == "print":
        print(l)
    if name == "sort":
        l.sort()
    if name == "pop":
        l.pop()
    if name == 'reverse':
        l.reverse()