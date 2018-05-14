n = int(input())

if n == 0:
    print 0
    exit()
    
n += 1 
print(n if (n & 1) else (long(n / 2)))
