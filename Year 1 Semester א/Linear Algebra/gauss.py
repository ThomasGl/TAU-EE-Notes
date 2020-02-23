import numpy as np


def gauss(matrix):
    rref = np.copy(matrix)
    k, n = matrix.shape
    r = -1
    for j in range(n):
        i = r+1
        while i < k and rref[i, j] == 0:
            i += 1
        if i < k:
            r += 1
            rref[i, :], rref[r, :] = rref[r, :].copy(), rref[i, :].copy()
            rref[r, :] = rref[r, :]/rref[r, j]
            for m in range(k):
                if m != r:
                    rref[m, j:n] -= rref[r, j:n] * rref[m, j]
    return rref, r


print("Test 1")
a, b = gauss(np.array([[1.0, 2.0, 3.0, 4.0], [1.0, 2.0, 3.0, 4.0],
                       [3.0, 2.0, 1.0, 4.0], [0.0, 3.0, 4.0, 5.0]]))
print(b)
print(a)

print("Test 2")
a, b = gauss(np.array([[1.0, 2.0, 3.0, 4.0], [1.0, 3.0, 4.0, 4.0],
                       [3.0, 2.0, 5.0, 4.0], [0.0, 3.0, 3.0, 5.0]]))
print(b)
print(a)
