n = int(input())
arr = list()
for i in range(n):
    arr.append(list(map(int, input())))

arr = sorted(arr, key=lambda a: a[0])
arr = sorted(arr, key=lambda a: a[1])

end = arr[0][1]
count = 0

for x, y in arr:
    if arr[i][0] >= end:
        end = arr[i][1]
        count += 1

print(count)
