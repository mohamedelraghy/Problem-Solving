import sys

sys.stdin = open('in.txt')

while True:
    try:
        array = list(map(int, input().split()))
        array = array[:-1] 
        
        Sum = 1
        MaxSum = -999999

        for i in range(0, len(array)):
            Sum = 1
            for j in range(i, len(array)):
                Sum = Sum * array[j]
                MaxSum = max(MaxSum, Sum)

        print (MaxSum)
    
    except EOFError:
        break