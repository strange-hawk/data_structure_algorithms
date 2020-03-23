def fact(n,val=1):
    if n<=0:
        return val
    else:
        return fact(n-1,val*n)
print(fact(5))

