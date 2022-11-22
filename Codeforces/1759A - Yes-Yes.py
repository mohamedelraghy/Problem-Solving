full = 'Yes' * 18
t = int(input())

for _ in range(t):
    if full.find(input()) >= 0:
        print('YES')
    else :
        print('NO')