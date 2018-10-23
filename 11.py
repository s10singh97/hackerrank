import textwrap as tt
s = input()
a = tt.wrap(s, 4)
ss = ""
for i in a:
    ss = ss + i + "\n"

print(ss)