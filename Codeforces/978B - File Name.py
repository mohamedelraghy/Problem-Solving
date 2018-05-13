

n, s = input(), input()
res = 0

while 'xxx' in s:
	i = s.find('xxx')
	s = s[: i] + s[i + 1:]
	res += 1
	
print(res)
