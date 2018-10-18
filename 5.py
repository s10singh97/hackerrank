import numpy as np
a = [float(x) for x in input().split()]
arr = np.array(a)
print(np.floor(arr))
print(np.ceil(arr))
print(np.rint(arr))