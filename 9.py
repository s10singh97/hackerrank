# Finding the substring

s = input().strip()
ss = input().strip()
count = 0
# flag = 0
# for i in range(0, len(s)-len(ss)):
#     for k in range(0, len(ss)):
#         if s[i+k] == ss[k]:
#             flag = 1
#         else:
#             flag = 0
#     if flag == 1:
#         count += 1
for i in range(len(s)):
    if s[i:].startswith(ss):
        count += 1
print(count)