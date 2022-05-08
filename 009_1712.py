# 시간초과 코드, 반복문을 최소화하자
'''
a, b, c = map(int, input().split())

i = 1
if (b > c):  # 손익분기점이 존재하지 않음
    i = -1
else:
    while (a+b*i >= c*i):
        i += 1


print(i)
'''

# 따로 마지막에 print하면 틀렸다고 함...왜임 짜증남...
'''
a, b, c = map(int, input().split())
count = 0
if (b >= c):  # 손익분기점이 존재하지 않음
    i = -1
else:
    count = a//(c-b) + 1

print(count)
'''


a, b, c = map(int, input().split())
count = 0
if (b >= c):  # 손익분기점이 존재하지 않음
    print(-1)
else:
    print(count=a//(c-b) + 1)
