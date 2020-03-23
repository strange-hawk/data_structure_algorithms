def func(n):
    if n==0:
        return 0
    else:
        return (n%10 + func(n//10))

print(func(9987))