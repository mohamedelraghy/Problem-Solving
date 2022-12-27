t = int(input())

while t :
	n = int(input())
	arr = input().split()
	arr_int = [int(ele) for ele in arr]

	sum = 1
	for ele in arr_int : 
		sum = sum * ele

	sum = sum + len(arr_int) - 1

	ans = sum * 2022 

	print(ans)
	t = t - 1

