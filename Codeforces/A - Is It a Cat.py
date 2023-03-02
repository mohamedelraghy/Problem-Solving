t = int(input())

while t:
  n = int(input())
  s = input().lower()
  
  newS = s[0]

  for ch in s:
    if ch != newS[-1]:
      newS = newS + ch

  if  newS == 'meow': 
    print('YES')
  else :
    print('NO')
  t = t - 1
