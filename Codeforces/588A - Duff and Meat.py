n = int(input())
MIN = 101
res = 0

for i in range(n):
    a, p = input().split()
    a, p = int(a), int(p)
    MIN = min(p, MIN)
    res += MIN * a

print(res)
