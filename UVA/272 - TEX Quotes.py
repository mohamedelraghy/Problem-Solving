def find(quote, ch):
    return [i for i, ltr in enumerate(quote) if ltr == ch]


quote = input()
print(quote)

ind =  find(quote, '"')
print(ind)