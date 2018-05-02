n = int(input())

for i in range(n):
    a, b = input().split()
    a, b = int(a), int(b)

    if a != b:
        print('Happy Alex')
        exit(0)

print("Poor Alex")
