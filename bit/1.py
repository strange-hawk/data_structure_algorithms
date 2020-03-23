n = 15
print(bin(n))
n=list(bin(n))
for i in range(2,len(n)):
    n[i-2]=n[i]
n.pop()
n.pop()
print(n)
for i in range(1,len(n)):
    if n[i]=='0':
        n[i]=n[i-1]
    elif n[i]=='1':
        if n[i-1]=='1':
            n[i]='0'
        else:
            n[i]='1'
n="".join(n)
n=int(n,2)
print(n)