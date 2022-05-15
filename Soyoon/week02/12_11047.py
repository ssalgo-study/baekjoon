n, k = map(int, input().split())

count = 0
arr = []

for j in range(n):
    arr.append(int(input()))

for j in range(n-1, -1, -1):
    if k == 0:
        break
    if arr[j] > k:
        continue
    count += k // arr[j]
    k %= arr[j]

print(count)
