num = int(input())
divisibles = 0
digits = 0
for ch in str(num):
    if num % int(ch) == 0:
        divisibles = divisibles + 1
    digits = digits + 1

if divisibles == 0:
    print("upset")
elif divisibles == digits:
    print("happier")
else:
    print("happy")