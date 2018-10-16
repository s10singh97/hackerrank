# Find the Runner-Up Score!

n = int(input())
arr = map(int, input().split())
arr = list(set(arr))
arr.sort()
print(arr[len(arr) - 2])